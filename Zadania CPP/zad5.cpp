#include <iostream>
using namespace std;

bool test(int liczba)
{
    if(liczba<2)
    {
        return false;
    }
    
    for(int i=2; i*i<=liczba; i++)
    {
        if(liczba%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int liczba;
    
    cout<<"Podaj liczbe: ";
    cin>>liczba;
    
    if(test(liczba)==1)
    {
        cout<<"Liczba "<<liczba<<" jest pierwsza"<<endl;
    }
    else
        cout<<"Liczba "<<liczba<<" nie jest pierwsza"<<endl;

    return 0;
}
