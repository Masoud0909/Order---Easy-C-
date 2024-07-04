/*Using Boolean operators to combine multiple relational operators in the same
condition, write a program that accepts 3 numbers and prints:
”increasing” if they are in increasing order,
“decreasing” if they are in decreasing order
“random” if they are neither increasing nor decreasing
-----------------------------------------------------------*/

#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;
	int c = 0;

	cout << "Enter 3 numbers: " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	if (a > b && b > c) {
		cout << "Decreasing Order !" << endl;
	}

	if (b > a && b > c) {
		cout << "Random Order !" << endl;
	}

	if (c > b && c > a) {
		cout << "Increasing Order !" << endl;
	}
	return 0;

}