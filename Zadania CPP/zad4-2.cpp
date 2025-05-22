#include <iostream>
using namespace std;

int main() {
    char option;

    do 
    {
        int a, b;
        int s= 0, sk = 0, q = 0;
        double sa = 0.0;

        cout<< "Podaj a: ";
        cin>> a;
        cout<< "Podaj b: ";
        cin>> b;

        for(int i = a; i <= b; ++i) 
        {
            q++;
            s+=i;
            sk+=i*i;
        }

        if (q>0) 
        {
            sa=static_cast<double>(s)/q;
        }

        cout<<"Podaj numer: 1(suma), 2(suma kwadratow), 3(srednia arytmetyczna), 4(koniec)" ;
        cin>>option;

        switch(option) 
        {
            case '1':
                cout<< s;
                break;
            case '2':
                cout<< sk;
                break;
            case '3':
                cout<< sa;
                break;
        }

    } 
    while (option !='4');
    return 0;
}