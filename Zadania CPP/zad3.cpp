#include <iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;
    
    while(a!=b)
    {
        if(a>b)
        {
            a=a-b;
        }
        else
        {
            b=b-a;
        }
    }
    cout<<"NWD wynosi: "<<a;

    return 0;
}
