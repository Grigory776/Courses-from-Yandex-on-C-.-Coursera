#include <iostream>
#include <vector>
using namespace std;

#include <iostream>

using namespace std;

int factorial(int n) {
	int res=1;
	while (n > 0) {
		res = res * n;
		n -= 1;
	}
	return res;
}


int main(){
	cout << factorial(1) << endl << factorial(0) << endl << factorial(4) << endl;

	return 0;
}