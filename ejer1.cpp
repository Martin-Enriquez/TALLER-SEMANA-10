#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int lazo=3;
    int suma=0;
    while(lazo<4 and lazo>0)
    {
        cout<<"INGRESE UN NUMERO: ";
        int num;
        cin>>num;
        suma+=num;
        lazo--;
    }
    double promedio=0;
    promedio=suma/3;
    cout<<"\n PROMEDIO: "<<promedio;
}