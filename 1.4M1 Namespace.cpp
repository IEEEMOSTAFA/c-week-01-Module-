#include<bits/stdc++.h>
using namespace std;
int x=5,y,z;
int func(int a,int b)
{
    return a+b;
}
namespace Info{
     int x=10;
     int y=5;
     int func(int a,int b)
     {
         return a*b;
     }

 }
 int main()
 {
     //cout<<x<<"\n";      //this print x=5
     int a=4;
     int b=5;
    // int x=Info::func(a,b);
    int x=func(a,b);
      //cout<<Info::x<<"\n";
      cout<<x<<"\n";
     return 0;
 }

