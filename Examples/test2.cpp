#include "iostream"

class Kutu{
    public:
    double kenar;
    Kutu(double k): kenar(k){}
    double hacimHesapla(){
        return this->kenar * this->kenar * this->kenar; 
    };
};

int main(){
    Kutu k1(5.0);
    std::cout << "Hacim: " << k1.hacimHesapla() << std::endl;
    return 0;
}