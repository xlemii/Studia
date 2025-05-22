#include <iostream>
using namespace std;

unsigned long long silnia(unsigned int n) 
{
    if (n==0 || n==1) 
    {
        return 1;
    }

    unsigned long long wynik = 1;
    for (unsigned int i=2; i<=n; ++i) 
    {
        wynik*=i;
    }

    return wynik;
}

int main() 
{
    unsigned int a;
    cout << "Podaj liczbe: ";
    cin>>a;

    unsigned long long wynik = silnia(a);
    cout<<"Wynik wynosi: "<<wynik;

    return 0;
}
