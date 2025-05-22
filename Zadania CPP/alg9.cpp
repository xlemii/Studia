#include <iostream>
#include <set>
using namespace std;

int main() 
{
    int n = 4;
    int m = 4;
    int x1, x2, y1, y2;
    int tab[n][m] = {
        {5, 7, 13, 22},
        {88, 100, 3, 2},
        {33, 7, 2, 3},
        {7, 3, 15, 2}
    };

    set<int>keys;

    //pierwszy punkt
    cout<<"Podaj x1: ";
    cin>>x1;
    cout<<"Podaj y1: ";
    cin>>y1;
    //drugi punkt
    cout<<"Podaj x2: ";
    cin>>x2;
    cout<<"Podaj y2: ";
    cin>>y2;
    
    //zapis *
    for(int i=x1; i<=x2; i++)
    {
        for(int j=y1; j<=y2; j++)
        {
            keys.insert(tab[i][j]);
        }
    }
    //podawanie wyniku
    cout<<"Pasujace wartosci: "<<endl;
    for (int key:keys)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if (tab[i][j] == key && i >= x1 && i <= x2 && j >= y1 && j <= y2)
                {
                    cout<<"Klucz: "<<key<<", indeks: ["<<i<<"]["<<j<<"]"<<endl;
                }
            }
        }
    }

    return 0;
}