#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

using namespace std;

bool IsPalindrom(const string t);

vector<string> PalindromFilter(vector<string> words, size_t minLeight){
	vector<string> res;
	for (const auto key : words) {
		if (IsPalindrom(key) && (size(key) >= minLeight))
			res.push_back(key);
	}
	return res;

}



int main() {

	vector<string> test = PalindromFilter({"weew","bro","code"},4);

	for (const auto k : test) {
		cout << k << endl;
	}




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