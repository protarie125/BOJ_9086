#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int t;
	cin >> t;
	while (0 < (t--)) {
		string x;
		cin >> x;

		cout << x[0] << x[x.length() - 1] << '\n';
	}

	return 0;
}