#include<iostream>
using namespace std;
class Teacher
{   private:
        double salary;
    public :
     //non parmatise constructor
       Teacher()
       {
        cout<<"HI, I am constructor" << endl ;
        dep = "computer science";
       }
         
   
        
        string name;
        string dep;
        string subject;
      void setSalary(double s)
       {
        salary = s ;
       }
      double getSalary()
       {
         return salary;
       }
      void changeDept(string newDept)
       {
         dep = newDept;
       }
    
};
int main()
{
    Teacher t1;
    t1.name = "aryan ";
    //t1.dep = " AI " ;
    t1.subject = " OOPS " ;
    // t1.salary = 1000;
    // cout<<t1.salary<<endl; //memebr data is priate
    t1.setSalary(2000);
    cout<<t1.getSalary()<<endl;
    cout<<t1.dep<<endl;


    Teacher t2;
    t2.name = " VIBHU ";
    //t2.dep = " CSE " ;
    t2.subject = " C++ " ;
    t2.setSalary(3000);
    cout<<t2.getSalary()<<endl;
    cout<<t2.dep<<endl;
    


}