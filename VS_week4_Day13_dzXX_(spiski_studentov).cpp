#include <iostream>
#include<string>
#include<vector>

using namespace std;

struct FullName {
    string name;
    string soname;
};

struct GodR {
    int day;
    int month;
    int year;
};

struct etudant {
    FullName a;
    GodR b;
};

int main()
{
    int N;
    cin >> N;
    vector <etudant> S(N);
    for (int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;
        S[i].a.name = tmp;
        cin >> tmp;
        S[i].a.soname = tmp;

        int t;
        cin >> t;
        S[i].b.day = t;
        cin >> t;
        S[i].b.month = t;
        cin >> t;
        S[i].b.year = t;
    }
    int Q;
    cin >> Q;
    string command;
    int n;
    for (int i = 0; i < Q;i++) {
        cin >> command >> n;
        if (((command != "name") && (command != "date")) || ((n <= 0) || (n > N)))
            cout << "bad request" << endl;
        else {
            if (command == "name") {
                cout << S[n - 1].a.name << ' ' << S[n - 1].a.soname << endl;
            }
            else if (command == "date") {
                cout << S[n - 1].b.day << '.' << S[n - 1].b.month << '.' << S[n - 1].b.year << endl;
            }

        }
    }
    return 0;
}

