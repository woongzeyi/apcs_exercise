#include <iostream>
using namespace std;

int main(void) {
    int age1;
    int age2;
    cout << "Please enter your age: ";
    cin >> age1;
    cout << "Please enter your friend's age: ";
    cin >> age2;
    if(age1 > age2) {
        cout << age1;
    } else {
        cout << age2;
    }
    return 0;
}