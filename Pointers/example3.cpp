#include <iostream>

class Matrix {
private:
    int data[2][2]; // 2x2'lik bir matris

public:
    // Yapıcı fonksiyon, matrisin elemanlarını başlatır
    Matrix(int a = 0, int b = 0, int c = 0, int d = 0) {
        data[0][0] = a; data[0][1] = b;
        data[1][0] = c; data[1][1] = d;
    }

    // '+' operatörünü aşırı yükleyen fonksiyon, matris toplama
    Matrix operator+(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // '-' operatörünü aşırı yükleyen fonksiyon, matris çıkarma
    Matrix operator-(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return result;
    }

    // '*' operatörünü aşırı yükleyen fonksiyon, matris çarpma
    Matrix operator*(const Matrix& other) const {
        Matrix result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                result.data[i][j] = 0;
                for (int k = 0; k < 2; ++k) {
                    result.data[i][j] += data[i][k] * other.data[k][j];
                }
            }
        }
        return result;
    }

    // '<<' operatörünü aşırı yükleyen arkadaş fonksiyon, matrisi ekrana yazdırma
    friend std::ostream& operator<<(std::ostream& os, const Matrix& m) {
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                os << m.data[i][j] << " ";
            }
            os << std::endl; // Satır sonunda yeni satıra geç
        }
        return os;
    }
};
int main() {
    Matrix m1(1, 2, 3, 4); // İlk matris
    Matrix m2(5, 6, 7, 8); // İkinci matris

    // Matris toplama
    Matrix sum = m1 + m2;
    std::cout << "Matris Toplamı:\n" << sum;

    // Matris çıkarma
    Matrix diff = m1 - m2;
    std::cout << "Matris Farkı:\n" << diff;

    // Matris çarpma
    Matrix prod = m1 * m2;
    std::cout << "Matris Çarpımı:\n" << prod;

    return 0;
}
