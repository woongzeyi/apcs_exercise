#include <iostream>
using namespace std;

#define PI 3.1415

int main(void) {
	int r;
	cout << "圆半径：";
	cin >> r;
	cout << "面积：" << PI * r * r << endl;
	cout << "周长：" << 2 * PI * r << endl;
	return 0;
}
