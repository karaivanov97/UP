# UP

#include <iostream>
using namespace std;
int main() {
	int arr[10];
	int x;
	cin >> x;
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < 10; i++) {
		if (arr[i] == x) {
			i++;
			while (i < 10) {
				arr[i - 1] = arr[i];
				cout << arr[i - 1] << "  ";
				i++;
			}
			arr[i - 1] = -1;
			cout << arr[i - 1] << "  ";
		}
		else {
		cout << arr[i] << "  ";
		}
	}

	return 0;
}
