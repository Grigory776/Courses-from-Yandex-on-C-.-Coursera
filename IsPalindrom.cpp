#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

using namespace std;

bool IsPalindrom(const string t);


int main() {

	string sl;
	cin >> sl;
	cout << endl << IsPalindrom(sl);

	return 0;
}

bool IsPalindrom(const string t) {

	bool res = true;
	int j = size(t) - 1;
	for (size_t i = 0; i < size(t) / 2; i++) {
		if (t[i] != t[j]) {
			return false;
		}
		j--;
	}
	return true;

}
