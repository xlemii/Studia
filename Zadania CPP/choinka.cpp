#include <iostream>
using namespace std;

int main()
{
    int height;
    int e=height;
    int s;
    int y=1;
    
    cout<<"Podaj wysokosc choinki: ";
    cin>>height;
    
    if(height>=1)
    {
        //wypisywanie choinki
        for(int i=0; i<height; i++)
        {   
            //wykonywanie spacji odstepu
            for(s=0; s<=height-i; s++)
            {
                cout<<" ";
            }
            
            //wypisywanie gwiazdek
            for(int x=0; x<i+y; x++)
            {
                cout<<"*";
            }
            cout<<endl;
            y++;
        }
        for(int t=0; t<=1; t++)
        {
            for(int t2=0; t2<=height; t2++)
            {
                cout<<" ";
            }
            cout<<"|"<<endl;
        }
    }
    else 
    {
        cout<<"Zbyt mala liczba";
    }
    return 0;
}
