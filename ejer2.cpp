#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>num;
    int veces=0;
    cout<<"Cuantos numeros va a ingresar: ";
    cin>>veces;
    num.resize(veces);
    for(int i=0;i<veces;i++)
    {
        cout<<"Ingrese un numero: ";
        cin>>num[i];
    }
    int mayor=num.at(0);
    int menor=num.at(0);
    for(int i=1;i<num.size();i++){
        if(num.at(i)>mayor)mayor=num.at(i);
        if(num.at(i)<menor)menor=num.at(i);
    }
    cout<<"\n MAYOR: "<<mayor;
    cout<<"\n MENOR: "<<menor;
}