//Accessing Modifiers
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

/*
class Person{
    public:
   string name;
   Person *father, *mother;//VVI
   void print_info()
   {
       cout<<"Name = "<<name<<"\n";
       cout<<"Fathers name = "<<father->name<<"\n";
       cout<<"Mothers name = "<<mother->name<<"\n";
   }



};
*/
int main()
{

Student s;
s.setInformation("A" , 21 , 20);
s.print_information();



  return 0;
}
