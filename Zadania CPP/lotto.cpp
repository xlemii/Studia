#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>
using namespace std;

int main()
{
    int liczba;

    cout<<"Witaj w losowaniu! Za 3 sekundy nastapi zwolnienie blokady"<<endl;
    Sleep(3000);
    srand(time(NULL));

    for(int i=1; i<=6; i++)
    {
        liczba=rand()%49+1;
        Sleep(1000);
        cout<<liczba<<"\a"<<endl;
    }

    system("pause");
    return 0;
}
