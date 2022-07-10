#include <iostream>
using namespace std;

int rectangle_surface(int l, int w) {
    return l * w;
}

int main(void) {
    int l;
    int w;
    cout << "Length of rectangle: ";
    cin >> l;
    cout << "Width of rectangle: ";
    cin >> w;
    cout << "Rectangle surface = " << rectangle_surface(l, w);
    return 0;
}