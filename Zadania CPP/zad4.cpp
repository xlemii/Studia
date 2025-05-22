#include <iostream>
using namespace std;

int main() {

    int lg;
    double sg;
    
    cout << "Liczba przepracowanych godzin: ";
    cin >>lg;
    cout<< "Stawka godzinowa: ";
    cin>>sg;

    double w = lg*sg;

    if (lg>40) 
    {
        double bonus = (lg-40)*2*sg;
        w += bonus;
    }

    double rw = w*52;

    double sp, p;
    if (rw <= 20000) 
    {
        sp = 0.19;
    } else if (rw <= 30000) {
        sp = 0.21;
    } else {
        sp = 0.28;
    }

    p = rw*sp;
    double WPP = rw-p;

    cout<<"Roczne wynagrodzenie: "<<rw<<endl;
    cout<<"Stawka podatkowa: "<<sp*100<<"%"<<endl;
    cout<<"Podatek: "<<p<<endl;
    cout<<"Wynagrodzenie po potraceniu podatku: "<<WPP<<endl;

    return 0;
}