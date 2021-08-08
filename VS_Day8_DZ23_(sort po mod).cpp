#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool norma(int i, int j) { //abs() - функция модуля
    return (abs(i) < abs(j));
}
void Print(const vector<int>& v) {
    for (const auto& i : v)
        cout << i << ' ';
    
}

int main()
{
   
    int N;
    cin >> N;
    vector<int> arr(N);
    
    for (int i = 0; i < N; ++i) 
        cin >> arr[i];
    
    sort(begin(arr), end(arr), norma);
    Print(arr);


    return 0;
}


