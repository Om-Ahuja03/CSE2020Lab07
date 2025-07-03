// lab07.cpp
#include "Employee.cpp"
#include "DoublyLinkedQueue.cpp"
#include<iostream>
using namespace std;

int main()
{
  //int queue
  int i,rmi,id;
  Queue<int> intq;
  cout<<"Enqueue positive numbers (enter 0 to stop) : ";
  do{
    cin >> i;
    if(i!=0)
    {
      intq.enqueue(i);
    }
  }while(i!=0);
  cout << "\nprint queue: ";
  intq.print();
  cout << "\nHow mant numbers to be removed from queue: ";
  cin >> rmi;
  for(int a=0;a<rmi;a++)
  {
    intq.dequeue();
  }
  cout << "\nprint queue: ";
  intq.print();
//string queue
  string s,name,dept;
  Queue<string> strq;
  cout<<"\nEnqueue string (enter exit) : ";
  do{
    cin >> s;
    if(s!="exit")
    {
      strq.enqueue(s);
    }
  }while(s!="exit");
  cout << "\nprint queue: ";
  strq.print();
  cout << "\nHow mant strings to be removed from queue: ";
  cin >> rmi;
  for(int c=0;c<rmi;c++)
  {
    strq.dequeue();
  }
  cout << "\nprint queue: ";
  strq.print();
//employee queue
  Queue<Employee> empq;
  cout<<"\nEmployee's id, name, dept (enter 0 to stop) : ";
  do{
    cin >> id;
    cin >> name;
    cin >> dept;
    if(id!=0)
    {
      empq.enqueue(Employee(id,name,dept));
    }
  }while(id!=0);
  cout << "\nprint queue: ";
  empq.print();
  cout << "\nHow mant employees to be removed from queue: ";
  cin >> rmi;
  for(int k=0;k<rmi;k++)
  {
    empq.dequeue();
  }
  cout << "\nprint queue: ";
  empq.print();

  return 0;
  


}