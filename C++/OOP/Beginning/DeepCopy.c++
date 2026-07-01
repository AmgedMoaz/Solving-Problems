#include <bits/stdc++.h>
using namespace std;

class Number {
private:
    int* value;   // dynamic pointer

public:
    // 1) Constructor
    Number(int v) {
        value = new int(v);
        cout << "Constructor called\n";
    }

    // 2) Copy Constructor (Deep Copy)
    Number(const Number& other) {
        value = new int(*other.value); // allocate new memory
        cout << "Copy Constructor called (Deep Copy)\n";
    }

    // 3) Destructor
    ~Number() {
        delete value;
        cout << "Destructor called\n";
    }

    // Function to modify value
    void setValue(int v) {
        *value = v;
    }

    // Function to display value
    void show() const {
        cout << "Value = " << *value << endl;
    }
};

int main() {

    cout << "Creating n1...\n";
    Number n1(10);

    cout << "\nCopying n1 into n2...\n";
    Number n2 = n1;   

    cout << "\nChanging n2 value...\n";
    n2.setValue(50);

    cout << "\nDisplaying values:\n";
    n1.show();   
    n2.show();   

    return 0;
}