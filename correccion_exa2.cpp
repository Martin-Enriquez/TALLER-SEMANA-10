#include <iostream>

using namespace std;

int main(){
    int num=0;
    cout<<"Ingrese un numero: ";
    cin>>num; //fallo de orientacion de signos en cin << por >>
    for(int i=1;i<=num;i++){
        int cuadrado=0;
        cuadrado=i*i;
        cout<<"\n"<<i<<" -> "<<cuadrado;
    }

    return 0;
}