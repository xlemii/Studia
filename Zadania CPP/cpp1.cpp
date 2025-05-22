#include <iostream>

using namespace std;

int main()
{
    float a, b, wynik;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;
    if (a != -b)
    {
        wynik=(a*a+b)/((a+b)*(a+b));
        cout << "Wartość wyrażenia wynosi: " << wynik;
    }
    else
        cout <<"Proba dzielenia przez zero"
}
