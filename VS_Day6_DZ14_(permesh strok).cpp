#include <iostream>
#include<vector>

using namespace std;

void MoveStrings(vector<string>& source, vector<string>& destination) {
    for (auto x : source) {
        destination.push_back(x);
    }
    source.clear();
}

int main()
{
    vector<string> source = {"1","2", "4"};
    vector<string> destination = { "z" };

    MoveStrings(source, destination);
    if (source.size() == 0)
        cout << "true" << endl;;

    for (auto x : destination)
        cout << x << ' ' ;
    cout << endl;

    return 0;
}

