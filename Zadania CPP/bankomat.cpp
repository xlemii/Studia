#include <iostream>
using namespace std;

int main()
{
    string pin;
    
    cout<<"Witaj w naszym banku!";
    cout<<"Podaj numer PIN: ";
    cin>>pin;
    
    if(pin=="1234")
    {
        cout<<"Podano prawidlowy PIN!";
    }
    else
    {
        cout<<"Podano nieprawdilowy PIN!";
    }
    return 0;
}
