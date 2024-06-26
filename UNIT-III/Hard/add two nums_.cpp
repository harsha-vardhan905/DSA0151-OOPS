#include <iostream>
using namespace std;

class Add {
private:
    int num1;
    int num2;

public:
    Add() {
        num1 = 0;
        num2 = 0;
    }

    Add(int n1, int n2) {
        num1 = n1;
        num2 = n2;
    }

    Add operator+(const Add& obj) {
        Add temp;
        temp.num1 = this->num1 + obj.num1;
        temp.num2 = this->num2 + obj.num2;
        return temp;
    }

    void displaySum() {
        cout << "Sum of numbers: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    }
};

int main() {
    Add obj1(10, 20);
    Add obj2(30, 40);

    Add result = obj1 + obj2;

    result.displaySum();

    return 0;
}
