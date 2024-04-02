#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    // Constructor
    Complex(float r = 0.0, float i = 0.0){
        real = r;
        imaginary = i;
    }

    // + operatörünü aşırı yükleme
    Complex operator+ (const Complex& other) const {
        return Complex(real + other.real, imaginary + other.imaginary);
    }

    // Karmaşık sayıyı yazdırma fonksiyonu
    void display() const {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    Complex c1(5.5, 4.5);
    Complex c2(1.5, 2.5);
    Complex c3 = c1 + c2; // + operatörü aşırı yüklendi

    c3.display(); // Toplamı yazdır: 7 + 7i

    return 0;
}
