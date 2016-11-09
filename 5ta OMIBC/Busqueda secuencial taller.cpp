#include <iostream>
using namespace std;

/**
El algoritmo funciona de la siguiente manera:
    revisamos de forma lineal todos los elementos del arreglo
    si alguno coincide con el valor que estamos buscando inmediatamente regresamos
    un valor de verdad, ya que si logró encontrar el valor

    Si el ciclo termina  y nunca regresó verdad, entonces podemos concluir que el valor no fue
    encontrado, por lo que la funcion regresa falso,
*/
bool busquedaSecuencial(int A[],int n,int valorABuscar){
    for(int i=0;i<n;i++){
        if(A[i]==valorABuscar) return true;
    }
    return false;
}
int main(){

    int n;
    cin>>n; //el valor de n representa la longitud del arreglo.
    int A[n]; //declaramos un arreglo de tipo entero (int) de n elementos
    for(int i=0;i<n;i++){ //para cada posicion del arreglo leemos el elemento
        cin>>A[i];
    }
    int valorABuscar = 5;
    //pasamos como parametros el arreglo que tenemos que aplicarle la busqueda, tambien
    //pasamos como parametro la longitud del arreglo y por ultimo el valor que queremos buscar

    if(busquedaSecuencial(A,n,valorABuscar)==true){
        cout<<"el elemento se encuentra en el arreglo" << endl;
    }
    else{
        cout << "el elemento no se encuentra en el arreglo" << endl;
    }
    return 0;
}
