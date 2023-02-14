#include<bits/stdc++.h>
using namespace std;

class student
{
    public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }
};

class Rectangle{
    public:
  int width,height;
  student s;
  //area
  int calculate_area()
  {
      return height*width;
  }
  int calculate_perimeter()
  {
      return 2*(height+width);
  }

};
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
int main()
{



    Person p;
    p.father =new Person;
    p.mother =new Person;
    p.name ="A";
    p.father->name="B";
    p.mother->name="C";
    p.print_info();

  return 0;
}

