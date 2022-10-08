#include <iostream>

using namespace std;

int main() {
	//Animals
	int cows, chickens, horses, total_legs;

	do {
		cout << "Enter the number of cows\t";
		cin >> cows;
		cout << "Enter the number of chickens\t";
		cin >> chickens;
		cout << "Enter the number of horses\t";
		cin >> horses;

	} while (cows < 0 || chickens < 0 || horses < 0);

	total_legs = (cows * 4) + (horses * 4) + (chickens * 2);

	cout << "The total legs are " << total_legs;


	return 0;
}