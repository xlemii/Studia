#include <iostream>
using namespace std;

int main()
{
    int a=1;
    int b, suma;
    
    cout<<"Podaj b: ";
    cin>>b;
    
    for(int i=a; i<=b; i++)
    {
        suma+=i;
    }
    
    cout<<"Suma wynosi: "<<suma;

    return 0;
}
