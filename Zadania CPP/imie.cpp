#include <iostream>
using namespace std;

int main()
{
    string name;
    int liczba;

    cout<<"Podaj imie: ";
    cin>>name;
    cout<<"Podaj liczbe: ";
    cin>>liczba;

    for(int i=1; i<=liczba; i++)
    {
        cout<<i<<". "<<name<<endl;
    }

    return 0;
}
