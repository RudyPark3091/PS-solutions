#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++)
			cout << ' ';
		cout << '*';
		for (int j = 0; j < 2 * i - 1; j++)
			cout << ' ';
		if (i != 0) cout << '*';
		cout << '\n';
	}

	for (int i = 0; i < 2 * n - 1; i++)
		cout << '*';

	cout << '\n';

	return 0;
}
