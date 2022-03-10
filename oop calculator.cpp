#include <iostream>
using namespace std;
class calc {
    public:
    void adition(int x ,int y){
        int z;
        cout<<(z=((x)+(y)));
       
    }
    void subs(int x ,int y){
        int z;
        cout<<(z=((x)-(y)));
       
    }
    void mul(int x ,int y){
        int z;
        cout<<(z=((x)*(y)));
       
    }
    void divi(int x ,int y){
        int z;
        cout<<(z=((x)/(y)));
       
    }
};
int main (){
    calc add;
    int r;
    int t;  
    cout<<"this is calculator"<<endl;
    cout<<"enter 1 st num"<<endl;
    cin>>r;
    cout<<"enter second num"<<endl;
    cin>>t;
    cout<<"enter operation to done (+,-,*,/)"<<endl;
    char o;
    cin>>o;
    if (o=='+'){
        add.adition(r,t);
    }
    if (o=='-'){
        add.subs(r,t);
    }    
    if (o=='*'){
        add.mul(r,t);
    } 
    if (o=='/'){
        add.divi(r,t);
    } 
    
    
    return 0;



}
