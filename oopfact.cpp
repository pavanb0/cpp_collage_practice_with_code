#include<iostream>
using namespace std;

class math {
    public:
    int a;
    long double fact=1;
    void input(){
        cout<<"give the number";
        cin>>a;
    }
    void factorial(){
        for(int i=1;i<=a;++i){
            fact *=i;
        }
        cout<<fact;
    }
};
int main(){
    math pavan;
    pavan.input();
    pavan.factorial();
    return 0;
}