#include <iostream>
using namespace std;

int main() 
{   
    int array[]= {28,11,1,8,10,5,9,20,9};
    int n = sizeof(array)/sizeof(array[0]);
    
    for(int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (array[j] > array[j + 1]) 
            {
            int temp = array[j];
            array[j] = array[j + 1];
            array[j + 1] = temp;
            }
        }
    }
    
    cout<<"Tablica: ";
    for(int i=0; i<n; i++)
    {
        cout<<array[i]<<", ";
    }
   
    return 0;
}