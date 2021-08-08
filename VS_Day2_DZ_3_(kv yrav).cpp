#include <iostream>
#include<string>
#include<cmath>

using namespace std;

int main()
{
    double A, B, C;
    cin >> A >> B >> C;

    if ((A == 0) && (B == 0) &&(C!=0))
        cout << "" << endl;

    if ((A == 0) && (B != 0))
        cout << -C / B << endl;

    if (A != 0) {

        double D = (B * B) - (4 * A * C);
        if (D < 0)
            cout << "" << endl;
        if (D == 0) 
            cout << -B / (2 * A);
        if (D > 0) {
            D = sqrt(D);
            cout << (-B + D) / (2 * A) << ' ' << (-B - D) / (2 * A);
        }


    }

    return 0;
}

