// Harshika Kamwal
// 25070123508

#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Aditya");
    u.show("Aditya", 19);
    u.show("Aditya", "Pune");
    u.show("Aditya", 19, "Pune");

    return 0;
}

// OUTPUT
// Name: Aditya
// Name: Aditya, Age: 19
// Name: Aditya, City: Pune
// Name: Aditya, Age: 19, City: Pune