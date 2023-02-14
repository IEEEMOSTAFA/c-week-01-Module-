//Use of Inheritance
#include<bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;


    public:
        void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }
   void setInformation(string s,int id,int ag)
    {
        name=s;
        std_id =id;
        age = ag;
    }
};


class User
{
protected:
    string name;
    int age;
};
class Admin:User{
    private:
    string designation;
    public:
        void Set(string s,int ag,string dg)
        {
            name=s;
            age=ag;
            designation =dg;
        }
        void print()
        {
            cout<<name<<"\n";
            cout<<age<<"\n";
            cout<<designation<<"\n";
        }


};
int main()
{

Admin ad;
ad.Set("A",20,"D");
ad.print();


  return 0;
}

