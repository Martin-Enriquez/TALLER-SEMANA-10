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
    for(int i = 0; i < veces; i++) {
        for(int j = 0; j < veces; j++) {
            if (i != j) { 
            cout << "(" << num[i] << ", " << num[j] << ")" << endl;
        }
        }
    }
}