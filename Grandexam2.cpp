#include <iostream>
using namespace std;
class GymMember
{
    int id;
    int weight;
    static int MemberCount;
    friend void trainerAdvice(GymMember w);

public:
    void registerMember(int i, int w)
    {
        id = i;
        weight = w;
        MemberCount++;
    }

    static void showCount()
    {
        cout << "The Totle Member at GYM is:-" << MemberCount << "." << endl;
    }
};

int GymMember ::MemberCount = 0;
void trainerAdvice(GymMember w)
{
    if (w.weight > 80)
    {
        cout << "Member [ID] is:-"<<w.id<< ". Start Cardio and Diet." << endl;
    }
    else
    {
        cout << "Member [ID] is:-"<<w.id<<". Start Heavy Lifting." << endl;
    }
}
int main()
{
    GymMember guys[5];
    int userInput;
    int userInput2;
    int i = 0;
    while (i < 5)
    {
        cout << "The ID and weight of The member is:- " << i + 1 << endl;
        cin >> userInput;
        cin >> userInput2;
        guys[i].registerMember(userInput, userInput2);
        trainerAdvice(guys[i]);
        i++;
    }
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The ID and weight of The member is:- " << i + 1 << endl;
    //     cin >> userInput;
    //     cin >> userInput2;
    //     guys[i].registerMember(userInput, userInput2);
    //     trainerAdvice(guys[i]);
    // }

    GymMember ::showCount();

    return 0;
}