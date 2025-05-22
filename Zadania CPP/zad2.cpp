#include <iostream>
using namespace std;

int main()
{
double a, b, c, wynik;
cout << "Podaj liczbe a: ";
cin >> a;
cout << "Podaj liczbe b: ";
cin >> b;
cout << "Podaj liczbe c: ";
cin >> c;

if(c>0)
{
    wynik = (a*a) + b;
    cout << "Wynik wynosi: " << wynik;
}
else if(c<0)
{
    wynik = a - (b*b);
    cout << "Wynik wynosi: " << wynik;
}
else
{
    wynik = 1/(a-b);
    cout << "Wynik wynosi: " << wynik;   
}
return 0;
}