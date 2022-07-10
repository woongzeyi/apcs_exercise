#include <iostream>
using namespace std;

int to_minutes(int h, int m) {
    return h * 60 + m;
}

int main(void) {
    int h;
    int m;
    cout << "Time in hours and minutes: ";
    scanf("%dh %dm", &h, &m);
    cout << "Time in minutes: " << to_minutes(h, m) << "m";
    return 0;
}