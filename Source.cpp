#include <iostream>
#include <ctime>
using namespace std;
int quarter(double x, double y) {
	if (x > 0 && y > 0) return 1;
	if (x < 0 && y > 0) return 2;
	if (x < 0 && y < 0) return 3;
	if (x > 0 && y < 0) return 4;
}
	bool even(int k) {
		return k % 2 == 0;
	}
int main() {
	//proc23
	/*for (int i = 1; i <= 3; i++) {
		double x = (rand() % 32001 - 16000) / 1000.0;
		double y = (rand() % 32001 - 16000) / 1000.0;
		cout << x << ' ' << y << ' ' << quarter(x, y) << endl;
	}*/
	//proc24
	for (int i = 1; i <= 10; i++) {
		int x = rand();
		cout << x << " - " << boolalpha << even(x) << endl;
	}
}