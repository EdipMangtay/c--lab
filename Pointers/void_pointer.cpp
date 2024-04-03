#include "iostream"
using namespace std;

void printNumber(int* numerPtr){
    cout<<*numerPtr<<endl; // this will print the value of the pointer
}
void PrintLetter(char* letterPtr){
    cout<<*letterPtr<<endl; // this will print the value of the pointer
}

void Print(void *ptr,char type){
    switch (type)
    {
    case 'i': cout<<((int*)ptr)<<endl; 
    case 'c': cout<<((char*)ptr)<<endl; // this will print the value of the pointer
        break;    
    default:
        break;
    }
}

int main(){

    //Void pointers are pointers that point to a value that has no type (and thus also an undetermined length and undetermined dereference properties).
    //This gives void pointers a great flexibility, by being able to point to any data type, from an integer value or a float to a string of characters.
    //void pointe hepsini alabilmektedir

    int number = 5;
    char letter ='a';

    printNumber(&number);
    PrintLetter(&letter);
    Print(&number,'i');
    Print(&letter,'c');

    return 0;
}