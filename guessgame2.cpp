#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()
using namespace std;

int main() {
    // 1. Initialize Random Seed (This makes it truly random every time)
    srand(time(0)); 

    // 2. Computer picks a number (1 to 10)
    int secretNumber = rand() % 10 + 1; 
    int playerGuess;
    int chancesLeft = 3;

    cout << "====================================" << endl;
    cout << "   WELCOME TO THE CASINO GAME       " << endl;
    cout << "   I have picked a secret number!   " << endl;
    cout << "====================================" << endl;

    // 3. THE LOOP (Run while chancesLeft is greater than 0)
    while (chancesLeft > 0) {
        cout << "\nYou have " << chancesLeft << " chances left." << endl;
        cout << "Enter your guess (1-10): ";
        cin >> playerGuess;
        
        
        if (secretNumber == playerGuess)
        {
            cout<<"You win!"<<endl;
            break;
        }
        
       else
       
        {
            chancesLeft--;
            cout<<"Wrong! decrease Chances!"<<endl;
        }
        
        // --- YOUR LOGIC STARTS HERE ---
        
        // IF guess is correct -> Print "YOU WIN!" and break the loop.
        
        // IF guess is wrong -> Print "Wrong!" and decrease chancesLeft.
        
        // --- YOUR LOGIC ENDS HERE ---
    }
    
    // 4. Game Over Logic
    if (chancesLeft == 0) {
        cout << "\n----------------------------" << endl;
        cout << "GAME OVER! The number was: " << secretNumber << endl;
        cout << "----------------------------" << endl;
    }

    return 0;
}