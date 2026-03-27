#include <iostream>

using namespace std;

int main(){
    int num_uno=0;
    int num_dos=0;
    int sum=0;
    int res=0;
    int mult=0;
    cout<<"Ingrese un numero: ";
    cin>>num_uno; //fallo de orientacion de signos << por >>
    cout<<"\n Ingrese otro numero: "; 
    cin>>num_dos; //fallo de orientacion de signos << por >>
    sum=num_uno+num_dos;
    res=num_uno-num_dos;
    mult=num_uno*num_dos;
    cout<<"\n Suma: "<<sum;
    cout<<"\n Resta: "<<res;
    cout<<"\n Multiplicacion: "<<mult;

    return 0;
}