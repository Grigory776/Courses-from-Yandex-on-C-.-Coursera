#include <iostream>
#include<vector>

using namespace std;

vector<int> Reversed(const vector<int>& v) {

    vector<int> temp = v;
    int p = v.size() - 1;
    for (int i = 0; i < v.size() / 2; i++) {
        swap(temp[i], temp[p]);
        --p;
    }
    return temp;
}

int main()
{
    vector<int> numbers = {-14,36,4,8,19};
    numbers = Reversed(numbers);

    for (auto x : numbers)
        cout << x << ' ';
    cout << endl;


    return 0;

}
