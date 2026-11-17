
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    string getName() {
        return name;
    }

    int getAge() {
        return age;
    }
};

class Student : public Person {
private:
    int rollNo;
    string branch;

public:
    Student(string n, int a, int r, string b)
        : Person(n, a) {
        rollNo = r;
        branch = b;
    }

    void displayDetails() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << getName() << endl;
        cout << "Age: " << getAge() << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Branch: " << branch << endl;
    }
};

int main() {

    Student s1("Ilma", 19, 23237, "Information Technology");

    s1.displayDetails();

    return 0;
}
