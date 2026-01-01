#include<iostream>
using namespace std;
    class Khan
    {
        private:
           int Name;
           int salery;
        public:
            void weightdog(void);
            void haircolor(void);
    };
    //    int mass;
    //    int beauty;
    void Khan::weightdog(void){
        // cin>>mass;
        cout<<"The color of Dog hair is red. "<<endl;
    }

    void Khan::haircolor(void){
        // cin>>beauty;
        cout<<"The weight of dog is 60kg. "<<endl;
    }
int main (){
    Khan h1;
    h1.weightdog();
    // cout<<mass;
    h1.haircolor();
    // cout<<beauty;
    return 0;
}