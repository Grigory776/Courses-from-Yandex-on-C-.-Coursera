#include <iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>

using namespace std;

int main()

{
    /*дз3*/

    ifstream a("input.txt");
    int N, M;
    if (a) {
        a >> N;
        a.ignore(1);
        a >> M ;
        int val;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                a >> val;
                a.ignore(1);
                cout << setw(10) << val;
                if (j != M-1)
                    cout << ' ';
            }
            if (i!=N-1)
            cout << endl;
        }
        
    }
    else
        cout << "error!" << endl;
    

    return 0;
}

/*дз1*/

//ifstream a("input.txt");
//
//ofstream b("output.txt");
//
//if (a) {
//    string line;
//    while (getline(a, line)) {
//        b << line << endl;
//    }
//}
//else
//cout << "error!" << endl;


/*дз2*/

//ifstream a("input.txt");
//double val;
//cout << fixed << setprecision(3);
//if (a) {
//
//    while (a >> val) { // пока в вэлью записываются элементы текста
//        cout << val << endl;
//    }
//}
//else
//cout << "error!" << endl;
