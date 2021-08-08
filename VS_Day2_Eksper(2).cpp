#include<iostream>
#include<string>
#include<algorithm>


using namespace std;

int main()
{
	cout << "hello world" <<endl;

	string Hw = "Hello,world!";

	for (char c : Hw)
		cout << c << "  ";
	cout << endl;

	int arr[] = { 9, 2, -36, 44, 1, 15, 1 };

	for (int c : arr)
		cout << c << "  ";
	cout << endl;

	sort(begin(arr), end(arr));
	
	for (int c : arr)
		cout << c << "  ";
	cout << endl;

	cout << count(begin(Hw), end(Hw), 'l') << endl;


	return 0;
}