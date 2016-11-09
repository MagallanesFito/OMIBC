#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Fibonacci[n+1];
    Fibonacci[0] = 0;//Conocemos el primer termino de fibonacci que es 0
    Fibonacci[1] = 1;// conocemos el segundo termino de fibonacci que es 1

        //para el resto, hacemos uso de la funcion vista en clase, almacenamos cada elemento en el arreglo.
    for(int i=2;i<=n;i++){
        Fibonacci[i] = Fibonacci[i-1] + Fibonacci[i-2];
    }
    cout << Fibonacci[n-1];
    return 0;
}
