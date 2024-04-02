#include "iostream"

using namespace std;

class Kordinatlar{
private:
        float x, y;
public:
 
 Kordinatlar(float xDeger, float yDeger){
        x = xDeger;
        y = yDeger;
 }
    void setX(float yeniX){
        x = yeniX; // x değerini değiştirir
    }
    void setY(float yeniY){
        y = yeniY; // y değerini değiştirir
    }
    float getX() const{
        return x; // x değerini döndürür
    }
    float getY() const{
        return y; // y değerini döndürür
    }
};

int main(){
    Kordinatlar p1(13.123,231.123);
    cout << "p1 X: " << p1.getX() << ", Y: " << p1.getY() << endl;

    p1.setX(4.5);
    p1.setY(3.5);
    cout << "Updated p1 X: " << p1.getX() << ", Y: " << p1.getY() << endl;

    double x1 = p1.getX() + p1.getY();
    cout << "X ve Y toplami: " << x1 << endl;



};