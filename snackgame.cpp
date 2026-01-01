#include <iostream>
#include <vector>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
#include <thread>  // For std::this_thread::sleep_for (Requires C++11 or later)
#include <chrono>  // For std::chrono::milliseconds (Requires C++11 or later)

using namespace std;

// --- Game Constants and State ---
const int WIDTH = 20;
const int HEIGHT = 10;
bool gameOver;
int score;

// Snake Head Position
int headX, headY;

// Food Position
int foodX, foodY;

// Snake Tail (stores coordinates of all tail segments)
// A vector of pairs, where each pair is (x, y) coordinate
vector<pair<int, int>> tail;

// Direction Enum to make code readable
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN };
Direction dir;

// --- Utility Functions ---

// Function to clear the console screen
// This is a simple, platform-independent way to clear the screen by printing newlines.
void ClearScreen() {
    for (int i = 0; i < 50; i++) {
        cout << "\n";
    }
    // Alternatively, for better performance on systems that support it:
    // system("cls"); // For Windows
    // system("clear"); // For Linux/macOS
}

// Function to initialize the game variables
void Setup() {
    gameOver = false;
    dir = STOP; // Snake is initially stopped
    headX = WIDTH / 2;
    headY = HEIGHT / 2;
    score = 0;
    tail.clear(); // Ensure the tail is empty

    // Seed the random number generator
    srand(time(0));

    // Place food randomly on the board
    foodX = (rand() % WIDTH);
    foodY = (rand() % HEIGHT);
    
    // Ensure food isn't on the border
    if (foodX == 0) foodX = 1;
    if (foodY == 0) foodY = 1;
    if (foodX == WIDTH - 1) foodX = WIDTH - 2;
    if (foodY == HEIGHT - 1) foodY = HEIGHT - 2;
}

// Function to draw the game board
void Draw() {
    ClearScreen();

    cout << "---------------------------------------" << endl;
    cout << "          Console Snake Game           " << endl;
    cout << "---------------------------------------" << endl;
    cout << "Score: " << score << endl;

    // Top border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;

    // Inner board content
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            if (j == 0)
                cout << "#"; // Left border

            if (i == headY && j == headX)
                cout << "O"; // Snake Head
            else if (i == foodY && j == foodX)
                cout << "*"; // Food
            else {
                // Check if the current position is a tail segment
                bool isTail = false;
                for (const auto& segment : tail) {
                    if (segment.first == j && segment.second == i) {
                        cout << "o"; // Snake Tail Segment
                        isTail = true;
                        break;
                    }
                }
                if (!isTail)
                    cout << " "; // Empty space
            }

            if (j == WIDTH - 1)
                cout << "#"; // Right border
        }
        cout << endl;
    }

    // Bottom border
    for (int i = 0; i < WIDTH + 2; i++)
        cout << "#";
    cout << endl;
}

// Function to handle user input
void Input() {
    // Note: Standard 'cin' is blocking (waits for Enter).
    // For a smoother experience, you'd use non-blocking input like getch() 
    // from conio.h (Windows) or termios/ncurses (Linux/macOS).
    // For this simple example, we check if input is available and process it.
    
    // Check if input is pending (using cin.peek() is often not reliable for non-blocking checks).
    // We will use a simple blocking input check for the first run, and then assume 
    // the user only needs to press a key when they want to change direction.
    
    if (cin.peek() != EOF && cin.peek() != '\n') {
        char c;
        cin >> c;
        switch (c) {
            case 'w':
            case 'W':
                if (dir != DOWN) dir = UP;
                break;
            case 's':
            case 'S':
                if (dir != UP) dir = DOWN;
                break;
            case 'a':
            case 'A':
                if (dir != RIGHT) dir = LEFT;
                break;
            case 'd':
            case 'D':
                if (dir != LEFT) dir = RIGHT;
                break;
            case 'x':
            case 'X':
                gameOver = true;
                break;
        }
        // Clear remaining input buffer (including the Enter key press)
        cin.ignore(1000, '\n'); 
    }
}

// Function containing the game rules and movement
void Logic() {
    // 1. Update Tail Positions: move all segments one step forward
    if (dir != STOP) {
        if (!tail.empty()) {
            // Shift all segments' positions forward
            for (size_t i = tail.size() - 1; i > 0; i--) {
                tail[i] = tail[i - 1];
            }
            // The first segment of the tail takes the old position of the head
            tail[0] = {headX, headY};
        }
    }

    // 2. Move Head
    switch (dir) {
        case LEFT: headX--; break;
        case RIGHT: headX++; break;
        case UP: headY--; break;
        case DOWN: headY++; break;
        case STOP: break;
    }

    // 3. Wall Collision Detection
    // The snake hits the wall (using the outer border as the boundary)
    if (headX < 0 || headX >= WIDTH || headY < 0 || headY >= HEIGHT) {
        gameOver = true;
        return;
    }

    // 4. Self Collision Detection
    for (const auto& segment : tail) {
        if (segment.first == headX && segment.second == headY) {
            gameOver = true;
            return;
        }
    }

    // 5. Food Consumption
    if (headX == foodX && headY == foodY) {
        score += 10;
        
        // Grow the tail: Add a new segment at the position the head just moved from
        // In this implementation, we simply add a segment (x, y) and it will be updated 
        // to the correct position on the next Logic call. A cleaner way would be to 
        // add the segment at the end of the current tail's position, but this works.
        tail.push_back({headX, headY}); 

        // Generate new food position
        do {
            foodX = (rand() % WIDTH);
            foodY = (rand() % HEIGHT);
        } while (headX == foodX && headY == foodY); // Ensure food doesn't spawn on the head
    }
}

// --- Main Game Loop ---
int main() {
    // FIX: If you receive errors related to 'thread' or 'chrono' in VS Code,
    // ensure your compiler is using the C++11 standard or newer.
    // The required compilation flag (e.g., for g++ or clang) is: -std=c++11
    // Example Compile Command: g++ snake_game.cpp -o snake -std=c++11
    
    Setup();
    
    // Initial instruction for the user
    ClearScreen();
    cout << "==================================================================" << endl;
    cout << "               Welcome to Console Snake!                          " << endl;
    cout << "==================================================================" << endl;
    cout << "Controls: W (Up), S (Down), A (Left), D (Right). Press X to Quit." << endl;
    cout << "Press any of the movement keys (W, S, A, D) and then ENTER to start!" << endl;
    cout << "The game will move 5 times per second once started." << endl;
    
    // Wait for the first input to start the game
    Input(); 

    while (!gameOver) {
        Draw();
        
        // Non-blocking input handling would go here, but since we are using 'cin'
        // we can only capture input between the movement steps.
        Input(); 
        
        Logic();

        // Control game speed (5 movements per second)
       
    }

    // Game Over screen
    ClearScreen();
    cout << "\n\n\n\n";
    cout << "***************************************" << endl;
    cout << "*** GAME OVER!             ***" << endl;
    cout << "*** Your Final Score: " << score << " points ***" << endl;
    cout << "***************************************" << endl;
    cout << "\n\n\n\n";

    return 0;
}
