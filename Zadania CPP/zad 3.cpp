#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Podaj a: ";
    cin >> a; //a = 28
    cout << "Podaj b: ";
    cin >> b; //b =24

    while(a!=b)
    {   
        
        if(a<b)
        {
            b = b-a;      
        }
        else if(a>b)
        {
            a = a-b;
        }

    }
    cout << "NWD wynosi" << a;
}
