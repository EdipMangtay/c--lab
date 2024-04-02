#include <iostream>
#include <string>
using namespace std; 
class Rectangle;

class Square {
public:
    Square(double side) : sideLength(side) {}

    // Rectangle sınıfının area fonksiyonunu friend olarak bildirir
    friend double area(const Rectangle& r);

private:
    double sideLength;
};

class Rectangle {
public:
    Rectangle(double w, double h) : width(w), height(h) {}

private:
    double width, height;

    // Square sınıfındaki friend fonksiyon, Rectangle'ın özel üyelerine erişebilir
    friend double area(const Rectangle& r);
};

// Square sınıfının friend fonksiyonu olarak tanımlanan area fonksiyonu
double area(const Rectangle& r) {
    return r.width * r.height;  // Rectangle'ın özel üyelerine doğrudan erişim
}

int main() {
    Rectangle rect(5, 10);
    cout << "Rectangle area: " << area(rect) << endl;  // friend fonksiyonu kullanımı

    return 0;
}
