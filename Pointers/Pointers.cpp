#include "iostream"
using namespace std;

int main(){

    int n = 5;
    cout<<&n<<endl; // this give an adress for the variable n
    int *ptr = &n; // this is a pointer to the variable n
    cout<<ptr<<endl; // this will give the same adress as &n
    cout<<*ptr<<endl; // this will give the value of n
    *ptr = 10; // this will change the value of n
    cout<<n<<endl; // this will print 10
    cout <<*ptr<<endl; 
    // float adress and int adress connot be stored in the same pointer

    
    return 0;

}