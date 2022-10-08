#include <iostream>

using namespace std;

int main() {
	int i = 1;
	while (i <= 5) {
		int j = 1;
		while (j <= 5) {
			if (i <= j) {
				cout << j << " sd";
			}
			else {
				cout << "* ";
			}

			j++;
		}

		cout << endl;
		i++;
	}

	return 0;
}