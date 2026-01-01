#include <iostream>
using namespace std;

class Player
{

public:
    int health, score;
    Player()
    {
        health = 100;
        score = 0;
        cout << "A new player has joined!" << endl;
    }
};

int main()
{
    Player p1, p2;
    return 0;
}