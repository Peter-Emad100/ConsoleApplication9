#include<iostream>
#include<cmath>
using namespace std;
void test() {
	cout << "test" << endl;
}
void meeting() {
	cout << "meeting" << endl;
}
bool armstrong(long num) {
	long cubes = 0;
	long clone = num;
	while (clone != 0) {
		cubes += pow((clone % 10), 3);
		clone /= 10;
	}
	if (num == cubes) {
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	cout << "i get github" << endl;
	/*int num;
	cin >> num;
	if (armstrong(num)) {
		cout << num << " is an Armstrong number.";
	}
	else {
		cout << num << " isn't an Armstrong number.";
	}*/
}
