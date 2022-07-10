#include <iostream>
using namespace std;

int main(void) {
    int num1;
    int num2;
    int sum;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = ";
    cin >> sum;
    if (num1+num2 == sum) {
        cout << "Right";
    } else {
        cout << "Wrong";
    }
    return 0;
}