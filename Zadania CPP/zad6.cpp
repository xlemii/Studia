#include <iostream>
using namespace std;

int main()
{
    int n;

    cout<<"Podaj n: ";
    cin>>n;

    int tablica[n];

    for(int i=0; i<n; i++)
    {
        cout<<"Podaj liczbe [index "<<i<<"]: "<<endl;
        cin>>tablica[i];
    }

    int pierwszy=tablica[0];
    cout<<"Pierwszy element: "<<pierwszy<<endl;

    cout<<"Zawatosc tablicy: ";
    for(int i=0; i<n; i++)
    {
        cout<<tablica[i];
    }

    int roznica=tablica[n-1]-tablica[0];
    cout<<endl<<"Roznica miedzy pierwszym a ostatnim elementem: "<<roznica<<endl;


    int suma;
    for(int i=0; i<n; i++)
    {
        suma+=tablica[i];
    }
    cout<<"Suma wszystkich elementow tablicy: "<<suma<<endl;

    int wybor;
    cout<<"Podaj index: ";
    cin>>wybor;
    cout<<endl<<"Liczba: "<<tablica[wybor]<<endl;

    system("pause");
    return 0;
}
