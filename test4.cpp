#include "iostream"

using namespace std;
int main(){
    int numbers[5] = {10,20,30};
    int *ptr = numbers;
    //cout << *ptr<<endl; dizinin ilk elemanını pointer içerisinde almamı gösteren kod

    for(int i =0; i<3; i++){

       cout <<"Sayilar [" << i << "] = " << *(ptr +i) << endl;

    }

}

