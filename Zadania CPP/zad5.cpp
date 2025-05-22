#include <iostream>
using namespace std;

int main()
{
    int a,b,s,option;
    double wynik;


    cout<<"Podaj a: ";
    cin>>a;
    cout<<"Podaj b: ";
    cin>>b;

    do{
    wynik=0;
    option=0;

    cout<<"Wybierz opcje: "<<endl;
    cout<<"1 - suma"<<endl;
    cout<<"2 - suma kwadratowa"<<endl;
    cout<<"3 - suma arytmetyczna"<<endl;
    cout<<"4 - koniec programu"<<endl;
    cin>>option;

    switch(option)
    {
        case 1:
            for(int i=a; i<b; i++)
            {
                wynik+=i;
            }
            wynik=wynik+b;
            cout<<"Wynik wynosi: "<<wynik<<endl<<endl;
            break;

        case 2:
            for(int i=a; i<b; i++)
            {
                wynik+=(i*i);
            }
            wynik=wynik+(a*a);
            cout<<"Wynik wynosi: "<<wynik<<endl;
            break;

        case 3:
            for(int i=a; i<=b; i++)
            {
                wynik+=i;
            }
            wynik = wynik / (b - a + 1);
            cout<<"Wynik wynosi: "<<wynik<<endl;
            break;

        case 4:
            cout<<"Zamykam program.";
            break;
    }
    }while(option!=4);

    return 0;
}
