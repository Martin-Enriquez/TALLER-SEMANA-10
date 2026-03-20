#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num=0;
    cout<<"Ingrese un numero";
    cin>>num;
    for(int i=0;i<num;i++){
        cout<<"\n"<<num<<" /2 = ";
        num/=2;
        cout<<num;
    }
}