#include "iostream"

using namespace std;
class Kutu{
public:
        double genislik;
        void setGenislik(double g){
            genislik = g;
        }
};
class Box{
    public:
    double uzunluk;
};



int main(){
    Kutu k1; // nesne tanımlama
    //Kutu *ptr; // pointer tanımlama

   // ptr =&k1; // pointer k1 nesnesini gösteriyor
    //ptr->setGenislik(10.0); // pointer ile fonksiyon çağırma
   // cout << "Genislik: " << k1.genislik << endl; // nesne ile erişim
    //return 0;

    Box *ptr = new Box[3]; // dinamik dizi oluşturma
    ptr[0].uzunluk = 10.0;
    ptr[1].uzunluk = 20.0;
    ptr[2].uzunluk = 30.0;
    cout << "Uzunluk: " << ptr[0].uzunluk << endl;
    cout << "Uzunluk: " << ptr[1].uzunluk << endl;
    cout << "Uzunluk: " << ptr[2].uzunluk << endl;
  

    int dizi[5] = {1,2,3,4,5};
    int O =  dizi[0];
    cout << O << endl;





}