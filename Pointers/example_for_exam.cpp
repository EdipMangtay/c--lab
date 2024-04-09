#include <iostream>


class Gamer {
private:
    int count{43};
public:
    Gamer() { count++; }
    int getCount() { return count; }
};

int main() {
    Gamer g1, g2;
    std::cout << g1.getCount() << " ";
    std::cout << g2.getCount() << " ";
    return 0;
}
