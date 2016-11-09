#include <iostream>
#include <cmath>
using namespace std;

/**
Declaramos la funcion, que regresa un booleano
determina si un numero es primo o no es primo.
*/
bool esPrimo(int n){
    if(n==1) return false; //1 no es primo
    if(n==2)return true; // 2 es el unico par que es primo
    if(n%2==0) return false; // ningun numero par es primo
    /**
        Notemos que si el numero que estamos analizando es par y es diferente de 2 no será primo.
        2 es el unico numero par que es primo. El ciclo for inicia en 3, ya que estamos descartando el caso
        en que i=2 divida a 2 porque ya lo comprobamos. Estamos utilizando la tecnica de revisar hasta la raiz
        cuadrada de n, la funcion sqrt() esta incluida en la libreria cmath (ver linea 2 del codigo). El incremento
        de i se hace de dos en dos, es decir inicia en i=3, para la siguiente vuelta del ciclo i sera igual a 5, porque
        en la linea 2 comprobamos que es un numero par, entonces todas las n que propongamos a la funcion ninguna será par
        al momento de llegar al ciclo for por eso podemos descartar valores de i pares ya que si un numero par divide a otro numero
        este forzosamente tiene que ser par, pero esto es falso por lo que mencionamos anteriormente.

        Si no queremos usar la funcion sqrt() podemos hacer

        for(int i=0; i*i<=n;i++){
            if(n%i==0) return false;
        }
    */
    for(int i=3;i<=sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(esPrimo(n)==true){
        cout << "el numero es primo"<< endl;
    }
    else{
        cout << "el numero no es primo" << endl;
    }
    return 0;
}
