#include <iostream>
using namespace std;

/**
ORDENAMIENTO POR BURBUJA
La funcion ordenaArreglo funciona de la siguiente manera:
    recibe como parametros dos datos, el arreglo a ordenar y la dimension
    la funcion es de tipo void, es decir no regresa nada. Solamente sirve para hacer una instruccion
    pero sin regresar ningun dato, para este caso la instruccion es ordenar el arreglo.

    el ciclo for externo toma en cuenta el primer elemento del arreglo, y lo compara con todos los siguientes a la derecha
    (el ciclo for interno).
    Esto lo hace hasta que hace la ultima comparacion, el penultimo elemento con el ultimo.
    Si mientras hace la comparacion encuentra que el elemento de la izquierda es mayor al de la derecha entonces ambos valores
    se intercambian. es la parte que va de la linea 23 a la linea 25


*/
void ordenaArreglo(int B[],int n){
    int aux;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(B[i] > B[j]){
                aux = B[i]; //intercambiamos elementos
                B[i] = B[j];
                B[j] = aux;
            }
        }
    }
}
int main(){
    int n;
    cin>>n; //leemos la dimension del arreglo
    int B[n]; //declaramos un arreglo de n elementos llamado B
    for(int i=0;i<n;i++){
        cin>>B[i];
    }
    cout << endl << endl; //solo unos saltos de linea para ver mejor el resultado
    cout << "Arreglo antes de ordenar " << endl;
    for(int i=0;i<n;i++){
        cout << B[i] << " ";
    }
    cout << endl;
    cout << "Arreglo despues de ordenar" << endl;

    ordenarArreglo(B,n);

    for(int i=0;i<n;i++){
        cout << B[i] << " ";
    }
    return 0;
}
