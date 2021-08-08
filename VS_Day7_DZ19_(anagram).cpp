#include <iostream>
#include<string>
#include<map>
#include<algorithm>

using namespace std;

void BuildCharCounters(const string& x, const string& y) {
    map <char, int> Slovar;

    for (int i = 0; i < x.size(); i++) 
        Slovar[x[i]] = count(begin(x), end(x), x[i]);

    map <char, int> Slovar1;

    for (int i = 0; i < y.size(); i++)
        Slovar1[y[i]] = count(begin(y), end(y), y[i]);

    if (Slovar == Slovar1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    int N;
    cin >> N; // Введите количество пар слов, которые стоит проверить

    string a, b;
   

    for (int i = 0; i < N; i++) {

        cin >> a >> b;
        BuildCharCounters(a, b);
        
    }
    return 0;
}

