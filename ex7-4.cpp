#include <iostream>
using namespace std;

int to_fahrenheit(int celsius) {
    return (celsius * 9/5) + 32;
}

int main(void) {
    int c;
    cout << "Temperature in Celsius: ";
    scanf("%d degree C", &c);
    cout << "Temperature in Fahrenheit: " << to_fahrenheit(c) << " degree F";
    return 0;
}