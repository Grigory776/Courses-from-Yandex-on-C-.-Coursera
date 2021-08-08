#include<iostream>
#include<map>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


int main()
{
    map<string, string> mid; // страна ключ
    int Q;
    string command;
    cin >> Q;

    for (int i = 0; i < Q; i++) {

        cin >> command;

        if (command == "CHANGE_CAPITAL") {
            string a, b;
            cin >> a >> b; // a страна, и b столица

            if (mid[a] == "") {

                mid[a] = b;
                cout << "Introduce new country " << a << " with capital " << b << endl;
            }

            else if (mid[a] == b) {
                mid[a] = b;
                cout << "Country " << a << " hasn't changed its capital" << endl;
            }

            else {

                cout << "Country " << a << " has changed its capital from " << mid[a] << " to " << b << endl;
                mid[a] = b;

            }
        }

        else if (command == "RENAME") {
            string a, b;
            cin >> a >> b; // a страна (старое имя), и b страна(новое имя)

            if ((b == a) || (mid[a] == "") || (mid[b] != "")) {

                cout << "Incorrect rename, skip" << endl;

            }
            else {
                mid[b] = mid[a];
                mid.erase(a);
                cout << "Country " << a << " with capital " << mid[b] << " has been renamed to " << b << endl;
            }

        }

        else if (command == "ABOUT") {
            string a;
            cin >> a; // a страна 
            if (mid[a] == "") {
                
                cout << "Country " << a << " doesn't exist" << endl;
            }
            else {
                cout << "Country " << a << " has capital " << mid[a] << endl;
            }

        }
        else if (command == "DUMP") {
                int i = 0;

            for (const auto& x : mid) {

                if (x.second == "")
                    i++;

            }
            if (i == mid.size()) {
                cout << "There are no countries in the world" << endl;
               
            }
            else {
                for (const auto& x : mid) {
                    if (x.second !="")
                        cout << x.first << '/' << x.second << ' ';
                }
                cout << endl;
                
            }




        }
    }

    return 0;
}

