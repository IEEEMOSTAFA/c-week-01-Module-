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
int main()
{
    Rectangle r1,r2;
r1.height=4;
r1.width=8;
cout<<r1.calculate_area()<<"\n";
cout<<r1.calculate_perimeter()<<"\n";
r1.s.name="X";    //kob bojar jinis vvi;
r1.s.print_information();

//r2.height=3;
//r2.width=9;
//cout<<r2.calculate_area()<<"\n";
//cout<<r2.calculate_perimeter()<<"\n";

    //student s;
   // s.name="Md Al Mostafa";
    //s.std_id=1705056;
    //s.age=21;
    //s.fathers_name="Rafiqul Alam";
    //s.mothers_name="Arafa Begum";
    //s.print_information();
    //student s2;
/*
    s2.name="Nadia Khandakar";
    s2.std_id=21702066;
    s2.age=18;
    s2.fathers_name="Kadir Khandakar";
    s2.mothers_name="...... Khandakar";
    s2.print_information();
*/


  return 0;
}
