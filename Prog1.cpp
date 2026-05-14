/*1. Program: Create a Class for a Student
Statement: Write a program to define a class Student that stores a student's name and age. Create an object and display the data.
*/
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    void display();

    
};
void Student:: display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

int main() {
    Student s1;
    s1.name = "Alice";
    s1.age = 20;

    s1.display();
    return 0;
}

