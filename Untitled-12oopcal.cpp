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
while (1=1){
    int main (){
    
        int r,t;  
    
        cout<<"this is calculator"<<endl;
    
        cout<<"enter 1 st num"<<endl;
    
        cin>>r;
    
        cout<<"enter second num"<<endl;
    
        cin>>t;
    
        cout<<"enter operation to done (+,-,*,/)"<<endl;
    
        char o;
    
        cin>>o;
    
        if (o=='+'){
    
            calc add;
    
            add.adition(r,t);
    
        }
    
        if (o=='-'){
    
            calc sub;
    
            sub.subs(r,t);
    
        }
    
        if (o=='*'){
    
            calc mult;
    
            mult.mul(r,t);
    
        }
    
        if (o=='/'){
    
            calc dvi;
    
            dvi.divi(r,t);
    
        }
        char yes;
        char no;
        cout<<"eant to play (yes/no)";
        cin>>yes;
        if (yes=='no'){
            break;
        }
        return 0;
    
    }
}    