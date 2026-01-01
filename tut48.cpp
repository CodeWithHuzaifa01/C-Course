// // Task form Gmeini Written By Huzaifa Tahir
// #include <iostream>
// #include <string>
// using namespace std;

// class book
// {
// private:
//     string title;
//     string author;
//     int pages;

// public:
//     void setdetailed(string Newtitle, string Newauthor, int Newpages);
//     void showdetailed()
//     {
//         cout << "The Title of the Book is " << title << "." << endl;
//         cout << "The Author  of the Book is " << author << "." << endl;
//         cout << "The Totle Book is contain around " << pages << " Pages." << endl;
//     }
// };

// void book::setdetailed(string Newtitle, string Newauthor, int Newpages)
// {
//         title = Newtitle;
//         author = Newauthor;
//         pages = Newpages;
// }

// int main()
// {
//     book english;
//     book science;
//     english.setdetailed("Don't waste your Time man", "Robert keusaki", 175);
//     english.showdetailed();

//     science.setdetailed("Gravitational Force", "Sir Issac Newton", 270);
//     science.showdetailed();

//     return 0;
// }



// Task form Gmeini Written By Huzaifa Tahir
#include <iostream>
#include <string>
using namespace std;

class book
{
private:
    string title;
    string author;

public:
    int pages;
    void setdetailed(string Newtitle, string Newauthor);
    void showdetailed()
    {
        cout << "The Title of the Book is " << title << "." << endl;
        cout << "The Author of the Book is " << author << "." << endl;
        cout << "The Totle Book is contain around " << pages << " Pages." << endl;
    }
};

void book::setdetailed(string Newtitle, string Newauthor)
{
        title = Newtitle;
        author = Newauthor;
}

int main()
{
    book NCS;
    book science;

    NCS.pages = 175;
    NCS.setdetailed("Don't waste your Time man", "Robert keusaki");
    NCS.showdetailed();

    science.pages = 270;
    science.setdetailed("Gravitational Force", "Sir Issac Newton");
    science.showdetailed();

    return 0;
}