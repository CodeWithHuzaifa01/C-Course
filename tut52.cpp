#include <iostream>
#include <string>
using namespace std;

class Binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);
};

void Binary ::read(void)
{

    cout << "Enter a binary Number: " << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        {
            if (s.at(i) != '0' && s.at(i) != '1')
            {
                cout << "Incorrect Binary Format. " << endl;
                exit(0);
            }
        }
    }
}

int main()
{
 Binary b;
 b.read();
 b.chk_bin();
    return 0;
}

   //Incomplete program resume from Epi 22:-