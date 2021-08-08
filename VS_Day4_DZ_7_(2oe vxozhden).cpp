#include <iostream>
#include<string>

using namespace std;

int main()
{
    string v;
    int i=0,temp=0;
    cin >> v;
    for (char c : v) {
        if (c == 'f')
            temp += 1;
        if (temp == 2) {
            cout << i << endl;
            temp += 1;
        }
        i += 1;
    }
    if (temp == 0)
        cout << "-2" << endl;
    else if (temp == 1)
        cout << "-1" << endl;

    return 0;
}

