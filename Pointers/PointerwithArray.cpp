#include "iostream"
using namespace std;

int main(){

    int luckyNumbers[5];; 
   /* cout <<luckyNumbers<<endl; // this will print the adress of the first element of the array
    cout <<&luckyNumbers[0]<<endl; // this will print the adress of the first element of the array and the same of the above
    cout <<luckyNumbers[2]<<endl; // this will print the value of the third element of the array
    *///cout <<*(luckyNumbers+2)<<endl; // this will print the value of the third element of the array

    for(int i =0; i<4;i++){
        cout<<"Enter the "<<i+1<<"th lucky number: ";
        cin>>luckyNumbers[i];
    }
    for (size_t i = 0; i <4; i++)
    {
        cout<<luckyNumbers[i]<<endl;
    }
    cout <<"***************"<<endl;
    cout<<"Under this line, the adresses of the elements of the array will be printed"<<endl;

    for(int x=0; x<4;x++){
        cout<<&luckyNumbers[x]<<endl;
    }
    cout <<"***************"<<endl;
  
    
    
}