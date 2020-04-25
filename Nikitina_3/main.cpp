#include <iostream>
using namespace std;

void main(void)
{
	setlocale(LC_ALL, "Russian");

	cout << "Автор: Никитина Дарья Сергеевна\n";
	cout << "Программа для расчёта срока обучения\n";

	int k = 1;
	int t = 0;

	while(k <= 20)
	{
		t += k;
		cout << "День " << k << ", смастерил " << k << ", за всё время " << t << "\n";
		k++;
	}
	

	system("PAUSE");
}
