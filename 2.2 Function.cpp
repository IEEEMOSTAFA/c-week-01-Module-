#include<bits/stdc++.h>
using namespace std;
/*
string erase_first_last(string s)
{
    s.erase(s.begin());
    s.pop_back();
    return s;
}
void erase_first_last2(string &s)
{
    s.erase(s.begin());
    s.pop_back();
    cout<<"In functin s="<<s<<"\n";
}
int main()
{
    string s;
    cin>>s;
    //string ans=erase_first_last(s);
    //cout<<s<<"\n";
    //cout<<ans<<"\n";
    erase_first_last2(s);
    cout<<s<<"\n";
*/
void swap(int &x,int &y)
{
  int z=x;
  x=y;
  y=z;
}
int main()
{

int a,b;
cin>>a>>b;
swap(a,b);
cout<<a<<" "<<b<<"\n";
    return 0;

}
