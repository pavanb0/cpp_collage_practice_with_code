#include<iostream>
#include<string>
using namespace std;

int main()
{
    
    char x,y,n;
    char ask;
    int a,b,c,d,i,per;


    cout<<"Hi! Welcome to the quiz game"<<endl;
    cout<<"Do you want to play"<<endl;
    cout<<"Press y to play or n to exit"<<endl;
    cin>>ask;
    if(ask=='y')
    {
        cout<<"Question 1:"<<endl;
        cout<<"What is full form of RAM"<<endl;
        cout<<"1.Random Access Monitor"<<endl;
        cout<<"2.Random Access Memory"<<endl;
        cout<<"3.Read Only Memory"<<endl;
        cout<<"4.Read Access Memory"<<endl;
        cin>>a;
        if(a==2)
        {
           
            cout<<"Correct"<<endl;
            i++;
        }
        else
        {
            cout<<"Incorrect"<<endl;
        }

        cout<<"Question 2:"<<endl;
        cout<<"Which state is the financial capital of India"<<endl;
        cout<<"1.maharashtra"<<endl; //mumbai is not state its city of maharashtra
        cout<<"2.Gujarat"<<endl;
        cout<<"3.Delhi"<<endl;
        cout<<"4.Karnataka"<<endl;
        cin>>b;
        if(b==1)
        {
            
            cout<<"Correct"<<endl;
            i++;
        }
        else
        {
            cout<<"Incorrect"<<endl;
        }
        cout<<"Question 3:"<<endl;
        cout<<"Current President of India"<<endl;
        cout<<"1.Narendra Modi"<<endl;
        cout<<"2.Pranab Mukerji"<<endl;
        cout<<"3.Ram Nath Kovind"<<endl;
        cout<<"4.K.R.Narayan"<<endl;
        cin>>c;
        if(c==3)
        {
            
            cout<<"Correct"<<endl;
            i++;
        }
        else
        {
            cout<<"Incorrect"<<endl;
        }
        cout<<"Question 4:"<<endl;
        cout<<"What is the National Sports of India"<<endl;
        cout<<"1.Hockey"<<endl;
        cout<<"2.Cricket"<<endl;
        cout<<"3.Football"<<endl;
        cout<<"4.Kabbadi"<<endl;
        cin>>d;
        if(d==1)
        {
            
            cout<<"Correct"<<endl;
            i++;
        }
        else
        {
            cout<<"Incorrect"<<endl;
        }

       

        cout<<"Congrats! You have finished the quiz"<<endl;
        per=i/4*100;
        cout<<"you have scored "<<i<<" out of 4";
        
    }

    if(ask=='n')
    {
        cout<<"See ya next time,bye:)"<<endl;
    }    
    return 0;
}