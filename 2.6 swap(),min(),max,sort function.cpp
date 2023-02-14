#include<bits/stdc++.h>
using namespace std;
int main()
{
    //int a=4, b=5;
    //swap(a,b);
    //cout<<a<<" "<<b<<"\n";




    //int a=4,b=6;
   // int mini=min(a,b);
   // cout<<mini<<"\n";




    //int c=4,d=6;
    //int maxi=max(c,d);
    //cout<<maxi<<"\n";




    //2 ter besi variable takle  tokon
    //int a=3,b=5,c=1,d=2;
    //int mini=min({a,b,c,d});
    //cout<<mini<<"\n";
    vector<int>a={3,2,1,4,5};
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    cout<<"\n";

    //sort(a.begin() ,a.end());
    //sort from index 1 to index 2
    //a.end()=a.begin()+a.size()
    sort(a.begin()+1,a.begin()+2+1);


    cout<<"After sorting\n";
    for(int i=0;i<a.size();i++)
    cout<<a[i]<<" ";
    cout<<"\n";

    return 0;
}
