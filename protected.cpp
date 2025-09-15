#include <iostream>
using namespace std;

class AccessSpecifier
{
 protected:
      int data;
 
};
class subAccessSpecifier : public AccessSpecifier
{
 public:
    void setA(int x)
    {
     data = x;
    }
    void display()
    {
     cout << "The data: "<< data << endl; 
    }
 
};

int main()
{
 subAccessSpecifier obj;
 obj.setA(100);
 obj.display();
return 0;
}
