#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class SortedStrings {
public:
	void AddString(const string& s) {
		strings.push_back(s);
		
	}

	vector <string> GetSortedStrings() {
		sort(begin(strings), end(strings));
		return strings;
	}
private:
	vector<string> strings;

};

void PrintSortedStrings(SortedStrings& st) {
	for (auto s : st.GetSortedStrings()) {
		cout << s << " ";
	}
	cout << endl;
}

int main() {
	SortedStrings strings;

	strings.AddString("first");
	strings.AddString("third");
	strings.AddString("second");
	PrintSortedStrings(strings);

	strings.AddString("second");
	PrintSortedStrings(strings);


	return 0;
}