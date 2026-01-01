#include <iostream>
using namespace std;
class Ironball
{
    int weight;
    static int ballCount;
    friend void checkQuality(Ironball b);

public:
    void makeBall(int w)
    {
        weight = w;
        ballCount++;
    }
    static void showCount(){
        cout<<"Totle balls counts:-"<<ballCount<<endl;
    }
};

int Ironball::ballCount = 0;

void checkQuality(Ironball b)
{
    if (b.weight == 50)
    {
        cout << "Ball is Perfect!" << endl;
    }
    else
    {
        cout << "Ball is Rejected (Weight: "<<b.weight <<")" << endl;
    }
}

int main()
{
    Ironball batch[3];
    int userinput;
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter weight for the Ball "<< i + 1<<":"<<endl;
        cin>>userinput;

        batch[i].makeBall(userinput);
        checkQuality(batch[i]);
    }
    Ironball ::showCount();
    return 0;
}