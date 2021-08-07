#include <iostream>
#include <vector>
using namespace std;

void perevod(int num);

int main(){

	
	int n;
	cin >> n;
	cout << endl;
	perevod(n);


	return 0;
}

void perevod(int num) {

	vector <int> d;

	while ((num / 2) != 0) {
		d.push_back(num % 2);
		num /= 2;
	}

	if (num == 0) {
		d.push_back(0);
	}
	else {
		d.push_back(1);
	}

	for (int i = size(d) - 1; i >= 0;i--) {
		cout << d[i];

	}
	cout << endl;
}
