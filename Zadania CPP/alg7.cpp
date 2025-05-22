#include <iostream>
using namespace std;

int main()
{
    int m,n,temp1, temp2, suma;
    
    cout<<"Podaj m: ";
    cin>>m;
    cout<<"Podaj n: ";
    cin>>n;
    
    int array[m][n];
    
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<"Podaj zawartosc ["<<j<<","<<i<<"]: ";
            cin>>array[i][j];
            suma=suma+array[i][j];
        }
    }
    
    cout<<"Zawartosc: ";
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<array[i][j];
        }
    }
    cout<<endl;
    
    cout<<"Suma: "<<suma<<endl;
    
    cout<<"Podaj wybrane m: ";
    cin>>temp2;
    cout<<"Podaj wybrane n: ";
    cin>>temp1;
    cout<<array[temp1][temp2];
    
    return 0;
}
