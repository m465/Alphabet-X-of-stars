#include<iostream>
using namespace std;
int main() {
	int size, sp = 1;
	cout << "Enter size :";
	cin >> size;
	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (j == i || j == size+1-i)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}