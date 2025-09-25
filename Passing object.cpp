// Passing object to a function
#include <iostream>
using namespace std;

class student // class name
{
public:
    double marks; // member variable
    student(double m) // parameterized constructor
    {
     marks = m;   // assign the constructor argument to the member variable
    }
};

void calculateAverage(student stu1,student stu2) // function takes two student objects (passed by value)
{
 double avg = (stu1.marks + stu2.marks) / 2; 
 cout << "Average marks: " << avg << endl;
}

int main() {
    
  student s1(80.0),s2(82.0);
  calculateAverage(s1,s2); // call the function and pass the two objects (copies are passed)
    
    
    
    return 0;
}

