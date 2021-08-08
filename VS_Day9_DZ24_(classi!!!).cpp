#include <iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

class SortedStrings {
public:
    void AddString(const string& s) {
        str.push_back(s);
    }
    vector<string> GetSortedStrings() {
       sort(begin(str), end(str));
       return str;
    }
private:
    vector<string> str;
};

void PrintSortedStrings(SortedStrings& s) {
    for (int i = 0; i < s.GetSortedStrings().size(); i++)
        cout << s.GetSortedStrings()[i] << ' ';
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