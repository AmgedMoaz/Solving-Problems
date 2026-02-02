// write a C++ program that takes name, age, and job from user and prints them
#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    string job;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your job: ";
    cin.ignore(); // To ignore the newline character left in the buffer
    getline(cin, job);

    cout << "\nYour details are:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Job: " << job << endl;

    return 0;
}