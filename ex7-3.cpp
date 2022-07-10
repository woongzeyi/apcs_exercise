#include <iostream>
using namespace std;

int to_hours(int m) {
    return m / 60;
}

int to_remainder_minutes(int m) {
    return m % 60;
}

int main(void) {
    int m;
    cout << "Time in minutes: ";
    cin >> m;
    cout << "Time in hours and minutes: " << to_hours(m) << "h " << to_remainder_minutes(m) << "m";
    return 0;
}