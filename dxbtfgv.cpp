// dxbtfgv.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void szyfruj(int klucz, char* tekst);
int main()
{
    char tekst[200];
    int klucz;
    
    cout << "napisz cos\n";
    cin >> tekst;
    cout << "podaj klucz \n";
    cin >> klucz;
    szyfruj(klucz, tekst);
    
}
void szyfruj(int klucz, char* tekst)
{
    int dl = strlen(tekst);
    if (!(klucz >= -26 && klucz <= 26))
    {
        return;
    }
    if (klucz >= 0) {
        for (int i = 0; i < dl; i++) {
            if (tekst[i] + klucz <= 'z')
                tekst[i] += klucz;
            else {
                tekst[i] = tekst[i] + klucz - 26;
            }
        }
    }
    else {
        for (int i = 0; i < dl; i++) {
            if (tekst[i] + klucz >= 'a')
                tekst[i] += klucz;
            else {
                tekst[i] = tekst[i] + klucz + 26;
            }
        }
    }
    cout << tekst;
}
