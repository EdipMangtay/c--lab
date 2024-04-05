#include <iostream>
#include <cstring> // strlen ve strcpy fonksiyonları için

class String {
private:
    char* data; // Dinamik olarak ayrılan karakter dizisi

public:
    // Yapıcı fonksiyon, aldığı C-string'i kopyalar
    String(const char* str = "") {
        data = new char[strlen(str) + 1]; // Yeterli uzunlukta bellek ayır (+1 null karakter için)
        strcpy(data, str); // Gelen string'i kopyala
    }

    // Kopya yapıcı (Copy constructor)
    String(const String& other) {
        data = new char[strlen(other.data) + 1];
        strcpy(data, other.data);
    }

    // Atama operatörü (Copy assignment operator)
    String& operator=(const String& other) {
        if (this != &other) { // Kendine atama kontrolü
            delete[] data; // Eski veriyi temizle
            data = new char[strlen(other.data) + 1];
            strcpy(data, other.data); // Yeni veriyi kopyala
        }
        return *this; // Bu nesnenin referansını döndür
    }

    // '+' operatörünü aşırı yükleyen fonksiyon, string birleştirme
    String operator+(const String& other) const {
        String result;
        delete[] result.data; // Varsayılan inşa edilmiş string'in verisini temizle
        result.data = new char[strlen(data) + strlen(other.data) + 1]; // Yeni boyut için bellek ayır
        strcpy(result.data, data); // İlk string'i kopyala
        strcat(result.data, other.data); // İkinci string'i ekle
        return result;
    }

    // '==' operatörünü aşırı yükleyen fonksiyon, eşitlik kontrolü
    bool operator==(const String& other) const {
        return strcmp(data, other.data) == 0; // strcmp ile karşılaştır ve eşitlik durumunu döndür
    }

    // '<<' operatörünü aşırı yükleyen arkadaş fonksiyon, ekrana yazdırma
    friend std::ostream& operator<<(std::ostream& os, const String& str) {
        os << str.data;
        return os;
    }

    // Yıkıcı fonksiyon, dinamik olarak ayrılan belleği temizler
    ~String() {
        delete[] data;
    }
};

int main() {
    String s1("Hello, ");
    String s2("World!");

    // String'leri birleştirme
    String s3 = s1 + s2;
    std::cout << "Birleştirilmiş string: " << s3 << std::endl;

    // String eşitlik kontrolü
    String s4("Hello, World!");
    if (s3 == s4) {
        std::cout << "s3 ve s4 eşit." << std::endl;
    } else {
        std::cout << "s3 ve s4 eşit değil." << std::endl;
    }

    return 0;
}
