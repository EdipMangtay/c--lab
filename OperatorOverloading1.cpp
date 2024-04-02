#include <iostream>
#include <string>
using namespace std; 

class MyClass { 
private: 
    int value{0}; 
public: 
    MyClass():value(5) {}  
    int getValue()     
    {    
         return value;   
    }   
    void setValue(int q)
    { 
        value = q; 
    }   
    // Overloading the <= operator 
    bool operator <= (int q) { 
        value = q;  
    } 
};

int main() {  
    MyClass obj;
    cout << "Initial value: " << obj.getValue() << endl;
    obj <= 20; // Using the overloaded operator
    cout << "Updated value: " << obj.getValue() << endl;  
}