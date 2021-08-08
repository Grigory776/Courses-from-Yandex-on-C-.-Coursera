#include <iostream>

using namespace std;

void UpdateIfGreater(int first, int& second) {

    if (first > second)
        second = first;
}

int main()
{
    int a, b;
    a = 4;
    b = 2;

    UpdateIfGreater(a, b);

    return 0;
}

