#include <iostream>

class Fraction {
private:
    int numerator;   // Pay
    int denominator; // Payda

public:
    // Yapıcı fonksiyon, kesirin pay ve paydasını başlatır
    Fraction(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {
        // Payda 0 olamaz, kontrol et ve hata mesajı ver
        if (denominator == 0) {
            std::cerr << "Payda 0 olamaz!" << std::endl;
            this->denominator = 1; // Paydayı güvenli bir değere ayarla
        }
    }

    // '+' operatörünü aşırı yükleyen üye fonksiyon
    Fraction operator+(const Fraction& other) const {
        // Ortak payda üzerinden toplama işlemi yap
        int newNumerator = numerator * other.denominator + other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // '-' operatörünü aşırı yükleyen üye fonksiyon
    Fraction operator-(const Fraction& other) const {
        // Ortak payda üzerinden çıkarma işlemi yap
        int newNumerator = numerator * other.denominator - other.numerator * denominator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // '*' operatörünü aşırı yükleyen üye fonksiyon
    Fraction operator*(const Fraction& other) const {
        // Paylar ve paydalar kendi aralarında çarpılır
        int newNumerator = numerator * other.numerator;
        int newDenominator = denominator * other.denominator;
        return Fraction(newNumerator, newDenominator);
    }

    // '/' operatörünü aşırı yükleyen üye fonksiyon
    Fraction operator/(const Fraction& other) const {
        // İlk kesrin payı ile ikinci kesrin paydası, ve ilk kesrin paydası ile ikinci kesrin payı çarpılır
        int newNumerator = numerator * other.denominator;
        int newDenominator = denominator * other.numerator;
        return Fraction(newNumerator, newDenominator);
    }

    // '<<' operatörünü aşırı yükleyen arkadaş fonksiyon, kesiri ekrana yazdırır
    friend std::ostream& operator<<(std::ostream& out, const Fraction& fraction) {
        out << fraction.numerator << "/" << fraction.denominator;
        return out;
    }
};


int main() {
    Fraction f1(1, 2); // 1/2 kesri
    Fraction f2(3, 4); // 3/4 kesri

    // Kesirlerin toplanması
    Fraction resultAdd = f1 + f2;
    std::cout << f1 << " + " << f2 << " = " << resultAdd << std::endl;

    // Kesirlerin çıkarılması
    Fraction resultSubtract = f1 - f2;
    std::cout << f1 << " - " << f2 << " = " << resultSubtract << std::endl;

    // Kesirlerin çarpılması
    Fraction resultMultiply = f1 * f2;
    std::cout << f1 << " * " << f2 << " = " << resultMultiply << std::endl;

    // Kesirlerin bölünmesi
    Fraction resultDivide = f1 / f2;
    std::cout << f1 << " / " << f2 << " = " << resultDivide << std::endl;

    return 0;
}
