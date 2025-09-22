
#include <iostream>
using namespace std;

class EquilateralTriangle
{
 private:
     double a;
     double perimeter;
     double area;
     
public:
   void setA(double length)
   {
   a = length;
   perimeter = 3*a;
   area = (1.73*a*a)/4;
   }
   friend void Calculation(EquilateralTriangle obj);
};

void Calculation(EquilateralTriangle  obj)
{
 cout << "Equal arm: " << obj.a << endl;
 cout << "Perimeter: " << obj.perimeter << endl;
 cout << "Area: " << obj.area << endl;
}

int main() {
  EquilateralTriangle object;
  object.setA(10);
  Calculation(object);
  
   
   

    return 0;
}
