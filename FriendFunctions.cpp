#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int salary;
    int age;

public:
    Employee(string name, int salary, int age) {
        this->name = name;
        this->salary = salary;
        this->age = age;
    }

    friend void showinfo(Employee employee); // Arkadaş fonksiyon bildirimi
    friend class Test; // Arkadaş sınıf bildirimi
};

void showinfo(Employee employee) {
    cout << "Name: " << employee.name << endl;
    cout << "Salary: " << employee.salary << endl;
    cout << "Age: " << employee.age << endl;
}

class Test {
public:
    static void Show(Employee employee) {
        cout << "Name: " << employee.name << endl;
        cout << "Salary: " << employee.salary << endl;
        cout << "Age: " << employee.age << endl;
    }
};

int main() {
    Employee employee1("John", 5000, 25);
    Test::Show(employee1);
    return 0;
}
