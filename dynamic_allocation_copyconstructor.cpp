#include<iostream>
#include<cstring>
using namespace std;
class employee
{
  int empno;
  char name [10];
  char dept[5];
  public:
  employee(int x,char *n,char *d)
 {
   empno=x;
   strcpy(name,n);
   strcpy(dept,d);

 }
 employee(employee *e)
 {
 cout<<"\n\nCopy constructor";
  empno=e->empno;
  strcpy(name,e->name);
  strcpy(dept,e->dept);
  }
 void show()
 {
  cout<<"\nEmployee No : "<<empno;
  cout<<"\nName : "<<name;
  cout<<"\nDepartment : "<<dept;
 }
 ~employee()
 {
  cout<<"\nDstructor called";
 }
};

int main()
{
  int emp;
  char *Dept=new char[10];
  char *Name=new char[10];
  cout<<"\nEnter employee number : ";
  cin>>emp;
  cout<<"\nEnter Name : ";
  cin>>Name;
  cout<<"\nEnter department : ";
  cin>>Dept;
  employee *E=new employee(emp,Name,Dept);
  E->show();
  employee *F=new employee(E);
  F->show();
  delete E;
  delete F;
}
