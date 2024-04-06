#include <iostream>
#include <iomanip> // std::setw ve std::setfill için

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Yapıcı fonksiyon, saati başlatır
    Time(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {
        normalize();
    }

    // Zamanı normalize eden fonksiyon (60 saniye = 1 dakika, 60 dakika = 1 saat)
    void normalize() {
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24; // 24 saatlik format
    }

    // '+' operatörünü aşırı yükleyen fonksiyon, zaman ekleme
    Time operator+(const Time& other) const {
        return Time(hours + other.hours, minutes + other.minutes, seconds + other.seconds);
    }

    // '-' operatörünü aşırı yükleyen fonksiyon, zaman çıkarma
    Time operator-(const Time& other) const {
        int totalSec1 = hours * 3600 + minutes * 60 + seconds;
        int totalSec2 = other.hours * 3600 + other.minutes * 60 + other.seconds;
        int diffSec = totalSec1 - totalSec2;
        return Time(0, 0, diffSec);
    }

    // '==' operatörünü aşırı yükleyen fonksiyon, eşitlik kontrolü
    bool operator==(const Time& other) const {
        return hours == other.hours && minutes == other.minutes && seconds == other.seconds;
    }

    // '<<' operatörünü aşırı yükleyen arkadaş fonksiyon, zamanı ekrana yazdırma
    friend std::ostream& operator<<(std::ostream& os, const Time& t) {
        os << std::setw(2) << std::setfill('0') << t.hours << ":"
           << std::setw(2) << std::setfill('0') << t.minutes << ":"
           << std::setw(2) << std::setfill('0') << t.seconds;
        return os;
    }
};
int main() {
    Time t1(2, 45, 15); // 02:45:15
    Time t2(1, 30, 25); // 01:30:25

    // Zaman ekleme
    Time sum = t1 + t2;
    std::cout << t1 << " + " << t2 << " = " << sum << std::endl;

    // Zaman çıkarma
    Time diff = t1 - t2;
    std::cout << t1 << " - " << t2 << " = " << diff << std::endl;

    // Eşitlik kontrolü
    if (t1 == t2) {
        std::cout << t1 << " ve " << t2 << " eşit." << std::endl;
    } else {
        std::cout << t1 << " ve " << t2 << " eşit değil." << std::endl;
    }

    return 0;
}
