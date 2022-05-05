C++ Codes

Palindrome

    #include <iostream>  
    using namespace std;  
    int main()  
    {  
      int n,r,sum=0,temp;    
      cout<<"Enter the Number=";    
      cin>>n;    
     temp=n;    
     while(n>0)    
    {    
     r=n%10;    
     sum=(sum*10)+r;    
     n=n/10;    
    }    
    if(temp==sum)    
    cout<<"Number is Palindrome.";    
    else    
    cout<<"Number is not Palindrome.";   
      return 0;  
    }


______________________________________________________________________

Reverse a Number

    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    int n, reverse=0, rem;    
    cout<<"Enter a number: ";    
    cin>>n;    
      while(n!=0)    
      {    
         rem=n%10;      
         reverse=reverse*10+rem;    
         n/=10;    
      }    
     cout<<"Reversed Number: "<<reverse<<endl;     
    return 0;  
    }  	

__________________________________________________________________________

Armstrong

    #include <iostream>  
    using namespace std;  
    int main()  
    {  
    int n,r,sum=0,temp;    
    cout<<"Enter the Number=  ";    
    cin>>n;    
    temp=n;    
    while(n>0)    
    {    
    r=n%10;    
    sum=sum+(r*r*r);    
    n=n/10;    
    }    
    if(temp==sum)    
    cout<<"Armstrong Number."<<endl;    
    else    
    cout<<"Not Armstrong Number."<<endl;   
    return 0;  
    }  
_____________________________________________________________________________
Factorial

    #include <iostream>  
    using namespace std;  
    int main()  
    {  
       int i,fact=1,number;    
      cout<<"Enter any Number: ";    
     cin>>number;    
      for(i=1;i<=number;i++){    
          fact=fact*i;    
      }    
      cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
      return 0;  
    }  

_______________________________________________________________________________

2D Array Print

#include<iostream>
using namespace std;
int main()
{
        int arr[10][10], rows, cols, i, j;
        cout<<"\n Enter Rows for Array (Max 10) : ";
        cin>>rows;
        cout<<"\n Enter Columns for Array (Max 10) : ";
        cin>>cols;
        cout<<"\n Enter "<<rows<<"*"<<cols<<" Array Elements : \n";
        for(i=0; i<rows; i++)
        {
                for(j=0; j<cols; j++)
                {
                        cout<<" ";
                        cin>>arr[i][j];
                }
        }
        cout<<"\n Two Dimensional Array is : \n";
        for(i=0; i<rows; i++)
        {
                for(j=0; j<cols; j++)
                {
                        cout<<" "<<arr[i][j]<<" ";
                }
                cout<<"\n";
        }
        return 0;
}  
