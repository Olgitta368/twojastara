// ciagfibonacciego.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int f0;
    int f1;
    int f;
    cout << "ile kolejnych liczb Fibonacciego chcesz wypisać? \n";
    cin >> n;
    f0 = 0;
    f1 = 1;
    for (int i = 0; i < n; i++)
    {
        if (i > 1) {
            f = f0 + f1;
            f0 = f1;
            f1 = f;
        }
        else {
            f = i;
        }
        cout << f << " ";
    }
}

