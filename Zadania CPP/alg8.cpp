include <iostream>
#include <set>
using namespace std;

int main()
{
    int array[]= {28,1,8,10,5,9,8,3,7,8};
    int n = sizeof(array)/sizeof(array[0]);
    int key;

    set<int> keys;

    cout<<"Podaj klucz: ";
    cin>>key;

    for(int i=0; i<n; i++)
    {
        if(array[i]==key)
        {
            cout<<"Wynik według klucza A: "<<key<<", indeks: "<<i<<endl;
            break;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(array[i]==key)
        {
            cout<<"Wynik według klucza B: "<<key<<", indeks: "<<i<<endl;
        }
    }

    return 0;
}
