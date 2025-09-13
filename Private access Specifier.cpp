#include <iostream>
using namespace std;

class AccessSpecifier
{
 private:
     int data;
 public:
     void setA(int x)
     {
      data = x;
     }
     void display()
     {
     cout << "The data: " << data << endl;
     }
};

int main()
{
AccessSpecifier obj;
obj.setA(10);
obj.display();
    
return 0;
}
