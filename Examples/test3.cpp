// Pointer ile fonksiyon

#include "iostream"
using namespace std;

void arttir(int *ptr){
    (*ptr)++;
}

int main(){
    
    int x = 10; 
    arttir(&x); // x sayinin adresini gönderiyoruzi, fonksiyon içindeki işlemler x sayısını etkiler
    //& işareti x sayısının adresini alır
    // * işareti x sayısının değerini alır
    cout << x << endl;
}