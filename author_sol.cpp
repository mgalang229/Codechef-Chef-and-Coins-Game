#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		// view the image in this repository for better understanding
		// based on the pattern created, a losing position is number that is a multiple of 6
		cout << (n % 6 != 0 ? "Chef" : "Misha") << '\n';
	}
	return 0;
}
