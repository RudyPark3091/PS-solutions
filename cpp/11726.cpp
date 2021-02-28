#include <iostream>
#define MOD 10007
using namespace std;

int n;
int arr[1001] = {0, 1, 2, };

int solve(int _n) {
	if (_n < 3) {
		return arr[_n];
	} else if (arr[_n] == 0) {
		arr[_n] = ((solve(_n - 1)) % MOD + (solve(_n - 2)) % MOD) % MOD;
	}
	return arr[_n];
}

int main() {
	cin >> n;

	cout << solve(n) << '\n';
	return 0;
}
