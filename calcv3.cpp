/* A program to find day of a given date */
/*Understanding the Maths:

14/09/1998
dd=14
mm=09
yyyy=1998 //non-leap year
********************************************************************************************************
Step 1: Informations to be remembered.
 Magic Number Month array.
 For Year: {0,3,3,6,1,4,6,2,5,0,3,5}
 DAY array starting from 0-6: {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday}
 Century Year Value: 1600-1699 = 6
      1700-1799 = 4
      1800-1899 = 2
      1900-1999 = 0
      2000-2099 = 6..
*********************************************************************************************************
Step 2: Calculations as per the steps
 
 Last 2 digits of the year:  98
 Divide the above by 4:     24
 Take the date(dd):      14
 Take month value from array: 5 (for September month number 9)
 Take century year value:  0  ( 1998 is in the range 1900-1999 thus 0)
          -----
 Sum:        141
 ********************************************************************************************************
 Divide the Sum by 7 and get the remainder: 141 % 7 = 1
 
 Check the Day array starting from index 0: Day[1] = Monday

**If leap year it will be the remainder-1*/
//#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int dayofweek(int d, int m, int y)
{
	static int t[] = { 0, 3, 2, 5, 0, 3,
					5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return ( y + y / 4 - y / 100 +
			y / 400 + t[m - 1] + d) % 7;
}

// Driver Code
int main()
{
    int dd,mm,yy;
    cout<<"enter date";
    cin>>dd;
    cout<<"enter month";
    cin>>mm;
    cout<<"enter year";
	cin>>yy;
    int day = dayofweek(dd, mm, yy);
switch (day) {
  case 1:
    cout << " its Monday" << " " "on " " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 2:
    cout << " its Tuesday"<< " " "on" " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 3:
    cout << " its Wednesday"<< " " "on " " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 4:
    cout << " its Thursday"<< " " "on " " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 5:
    cout << " its Friday"<< " " "on" " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 6:
    cout << " its Saturday"<< " " "on " " " << dd<<"/" <<mm<<"/" << yy;
    break;
  case 7:
    cout << " its Sunday"<< " " "on " " " << dd<<"/" <<mm<<"/" << yy;
    break;
}
    

	return 0;

}
//  by pavan to make it more usable