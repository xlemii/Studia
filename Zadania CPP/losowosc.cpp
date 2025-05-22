#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    srand(time(NULL));
    int liczba=rand()%100+1, x;

    cout<<"Witaj! Pomyslalem o liczbe z zakresu 1-100"<<endl;

    for(int i=1; liczba!=x; i++)
    {
        cout<<"Zgadnij jaka to liczba! (To twoja "<<i<<" proba)"<<endl;
        cin>>x;
        if(x>liczba)
        {
            cout<<"Podana liczba jest zbyt duza"<<endl;
        }
        else if(x<liczba)
        {
            cout<<"Podana liczba jest zbyt mala!"<<endl;
        }
        else
        {
            cout<<"Zgadles! Myslalem o: "<<liczba;
        }
    }

    system("pause");

    return 0;
}
