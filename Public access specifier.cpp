#include <iostream>
using namespace std;

class AccessSpecifier
{
public:
    int data;   // Public variable
    void setA(int x)   // Public function
    {
        data = x;
    }
    
    void display()   // Public function
    {
        cout << "The data: " << data << endl;
    }
};

int main() {
    
    
    AccessSpecifier obj;
    obj.setA(10);
    obj.display();
    
    

    return 0;
}
