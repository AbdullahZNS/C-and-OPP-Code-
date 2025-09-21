#include <iostream>
using namespace std;

class Employee
{
 private:
     int id;
     char name[30];
 public:
     void setA();
     void display();
    
};

void Employee ::  setA()
{
 cout << "Plz specify your id: " << endl;
 cin >> id;
 cout << "Enter your name: " << endl;
 cin >> name;
}

void Employee ::  display()
{
 cout << "Id  : " << id << endl;
 cout << "Name: " << name << endl << endl;
}
int main()
{
 Employee emp[30];
 
 int n;
 cout << "Provide the number of Employees: " << endl;
 cin >> n;
 
 cout << "Ensure the documents of the " << n << " Employees: " << endl;
 int i;
 for(i = 0; i < n; i++)
 {
  emp[i].setA();    
 }
 
 
 cout << "The documents of the " << n << " employees: " << endl;
 for(i = 0; i < n; i++)
 {
  emp[i].display();    
 }
 
 
    
    
    return 0;
}
