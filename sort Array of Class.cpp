
#include<bits/stdc++.h>                                           //Array Of Class    Module 3.4

using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;
    Student()                   //program Run hocce na tai ai kali constructor ta use korte hobe;
    {

    }
    Student(string name,int id,int age,string f_name,string m_name)    //use Constructor    Etake constructor bole
    {
     this->name = name;                     //constructor a aki nam takle this->  sign ta baboher
     std_id=id;
     this->age=age;
     fathers_name=f_name;
     mothers_name=m_name;
    }

   Student(string s,int id,int ag)
   {
       name=s;
       std_id=id;
       age=ag;
   }


    public:
        void print_information()
    {
        cout<<name<<" "<<std_id<<" "<<age<<" "<<fathers_name<<" "<<mothers_name<<"\n";
    }

       bool operator < (Student s)       // poddoti-2            //class a  bole dibo konta choto ar etai holo ..............operator overloading
{
    return std_id<s.std_id;   //jokon amr std_id  ,s.std_id teke choto tokon etai cholbe
}

};
//dori amr doita student
/*
bool comp(Student a,Student b)    //poddoti -1
{
    //when a is less than b;
    if(a.std_id == b.std_id)
        return a.std_id < b.std_id;
    return a.std_id < b.std_id;   //Ekane less than or Equal dile program crash korbe  otoba freze  hoea jabe;
}
*/
int main()
{
  vector<Student>a;
  for(int i=0;i<10;i++)
  {
      a.push_back(Student("A",20-i,10));
  }
  for(int i=0;i<10;i++)
  {
      a[i].print_information();
  }

  cout<<"After Sorting\n";
 // sort(a.begin(),a.end(),comp);      //  poddoti -1
 //eta sadaron sort type na .Amader Banano ,Tai sort er sate (comp) namer function declare korte hobe;
  sort(a.begin(),a.end());    // poddoti-2
  for(int i=0;i<10;i++)
  {
      a[i].print_information();
  }
  return 0;
}





