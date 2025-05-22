#include <iostream>
using namespace std;

int main()
{
    int ilosc=1, czas=0, cel;

    cout<<"Podaj cel: "<<endl;
    cin>>cel;

    while(ilosc<=cel)
    {
        czas++;
        ilosc=ilosc*2;

        cout<<"Minelo godzin: "<<czas;
        cout<<" Liczba bakterii: "<<ilosc<<endl;
    }

    return 0;
}
