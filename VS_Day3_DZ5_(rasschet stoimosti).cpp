#include <iostream>

using namespace std;

int main()
{
    double N, A, B, X, Y;

    cin >> N >> A >> B >> X >> Y;

    if (N > B)
        N = (N / 100) * (100 - Y);
    else if (N > A)
        N = (N / 100) * (100 - X);

    cout << N << endl;
    return 0;
}


