#include <iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
    int Q;
    string command;
    cin >> Q;

    vector<bool> qeou; // очередь , каждый элемент в очереди либо беспокоится, либо нет

    for (int i = 0; i < Q;i++) {
        cin >> command;

        if (command == "COME") {
            int k;
            cin >> k;
            if (k >= 0) {
                for (int i = 0; i < k; i++)
                    qeou.push_back(0);
            }
            else {
                for (int i = 0; i < -k; i++)
                    qeou.pop_back(); // удаление последнего элемента в векторе
            }

        }
    
        else if (command == "WORRY") {
            int i;
            cin >> i;
            qeou[i] = true;
        }

        else if (command == "QUIET") {
            int i;
            cin >> i;
            qeou[i] = false;
        }

        else if (command == "WORRY_COUNT") {
            int sum = 0;
            for (int i = 0; i < qeou.size(); i++) {
                if (qeou[i] == true)
                    ++sum;
            }
            cout << sum << endl;

        }
}

    return 0;
}

