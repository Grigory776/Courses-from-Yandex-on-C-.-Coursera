#include <iostream>
#include<vector>

using namespace std;

int main()
{
	int N;
	cin >> N; // количество дней которые требуется рассмотреть

	vector<int> tempDay(N);

	for (int i = 0; i < N; i++)
		cin >> tempDay[i]; // вводим температуру дней, начиная с 0-ого

	int Sum = 0;
	int SrAr;  // Среднее арифмитическое температуры;

	for (int i = 0; i < N; i++)
		Sum+= tempDay[i];

	SrAr = Sum / N; // Средняя температура
	Sum = 0;

	for (int i = 0; i < N; ++i) {
		if (tempDay[i] > SrAr) {
			++Sum;
		}
	}
	cout << Sum << endl;

	for (int i = 0; i < N; ++i) {
		if (tempDay[i] > SrAr) {
			cout << i << ' ';
		}
	}
	cout << endl;

	return 0;
}


