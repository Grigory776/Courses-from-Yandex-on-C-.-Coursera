#include <iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    string b;
    string c;

    cin >> a >> b >> c;

    if ((a != b) && (b != c) && (a != c)) {

        if ((a < b) && (a < c))
            cout << a << endl;
        if ((b < a) && (b < c))
            cout << b << endl;
        if ((c < a) && (c < b))
            cout << c << endl;
    }

    if ((a == b) && (b == c))
        cout << a;

    else {
        if ((a == b)) {
            if (a < c)
                cout << a;
            else
                cout << c;
        }
        if ((a == c)) {
            if (a < b)
                cout << a;
            else
                cout << b;
        }
        if ((b == c)) {
            if (a < c)
                cout << a;
            else
                cout << c;
        }
       
    }

    return 0;
}


