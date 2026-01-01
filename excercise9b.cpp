#include <iostream>
using namespace std;
class MuhammadAli;
class Referee;
class MikeTyson
{
    int strength = 100;
    friend class Referee;
};

class MuhammadAli
{
    int strength = 95;
    friend class Referee;
};

class Referee
{
public:
    void AnnounceWinner(MikeTyson m, MuhammadAli a)
    {

        if (m.strength > a.strength)
        {
            cout << "The Winner is Mike Tyson with strength:" << m.strength << "%" << endl;
        }
        else if (m.strength < a.strength)
        {
            cout << "The Winner is Muhammad Ali with strength:" << a.strength << "%" << endl;
        }
        else
        {
            cout << "It is a Draw! Both have strength: " << m.strength << endl;
        }
    }
};

int main()
{
    MikeTyson M1;
    MuhammadAli A1;
    Referee R1;
    R1.AnnounceWinner(M1, A1);

    return 0;
}