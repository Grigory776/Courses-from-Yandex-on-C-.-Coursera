#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

bool IsPalindrom(string a) {

    if (a.size() < 2)
        return true;

    for (int i = 0; i < a.size() / 2; i++)
        if (a[i] != a[a.size() - 1 - i])
            return false;
    return true;
    
}

int main()
{
    string x;
    cin >> x;

    cout << IsPalindrom(x) << endl;

    return 0;
}

