#include <iostream>
#include <vector>

using namespace std;

int main()
{
 /*
    int a, b, temp=0;
    cin >> a >> b;
    vector<int> vect1, vect2;

    for (int i = 1; i <= a; i++) {
        if ((a % i) == 0)
            vect1.push_back(i);
   }

    for (int i = 1; i <= b; i++) {
        if ((b % i) == 0)
            vect2.push_back(i);
    }

   

    for (int i = 0; i < vect1.size(); i++) {
        for (int j = 0; j < vect2.size(); j++) {
            if (vect1[i] == vect2[j])
                if (vect1[i] > temp)
                    temp = vect1[i];
        }
    }
    if (temp!=0)
    cout << temp << endl;
 */

    int a, b;
    cin >> a >> b;
    while ((a>0)&&(b>0))
    {
        if (a > b)
            a %= b;
        else
            b %= a;
    }


    cout << a + b << endl;

    return 0;
}

