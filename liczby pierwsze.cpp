// liczby pierwsze.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
	int lp = 0;
	int p = 2;
	int n = 0;
	cout << "Podaj liczbę \n";
	cin >> n;
	while (lp < n)
	{
		for (int d = 2; d <= p - 1; d++) {
			if (p % d == 0) {
				p = p + 1;
			}
	}
		cout << p << " ";
		lp = lp + 1;
		p = p + 1;
	}
}

