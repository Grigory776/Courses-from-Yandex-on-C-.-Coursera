#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int N;
    cin >> N;

    vector<int> VN;

    do
    {
        VN.push_back(N % 2);
        N /= 2;
        if (N == 1)
            VN.push_back(1);

    } while (N / 2 != 0);

    if (VN[VN.size() - 1] != 0) {
        for (int i = VN.size() - 1; i >= 0; i--)
            cout << VN[i];
    }

   

    return 0;
}

