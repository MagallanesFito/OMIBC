#include <iostream>
using namespace std;

/**
usando la formula propuesta en clase.
*/
int sumatoria(int n){
    return n*(n+1)/2;
}
/**
iniciamos una variable que se llama suma, la inicializamos con valor 0
el ciclo inicia en i=1; hasta i=n
para cada iteracion del ciclo la variable suma se actualiza y le asigna el valor anterior mas el
valor de la i actual, es decir:
para n=5:


i=1
suma=0 + 1
    entonces ahora suma=1
i=2
suma = 1 + 2
    entonces ahora suma=3
i=3
suma = 3+3
    entonces ahora suma=6
i=4
suma = 6+4
    entonces ahora suma=10
i=5
suma = 10+5
    entonces ahora suma=15
*/
int sumaConCiclo(int n){
    int suma=0;
    for(int i=1;i<=n;i++){
        suma = suma+i;
    }
    return suma;
}
/**
Esta es la solucion mas complicada de entender ya que hace uso de recursividad
pero una vez entendiendo el concepto es facil de implementar.

Si tenemos una funcion f(n) que nos calcula la suma de los primeros n numeros
podemos tambien definrla como f(n) = n + f(n-1)
por ejemplo:

    1+2+3+4+5+6 = (1+2+3+4+5) + 6
que a su vez
    1+2+3+4+5 =   (1+2+3+4)   + 5
que a su vez
    1+2+3+4 = (1+2+3) + 4
que a su vez
    1+2+3 = (1+2) + 3
que a su vez
    1+2 = (1) + 2

sabemos que f(1)=1 porque la suma desde 1 hasta 1 es igual a 1, a esto le llamaremos caso base.
una funcion recursiva, de cualquier tipo funciona de la siguiente manera:
    en la primera linea debe especificarse un caso base, el que haga que la recursion se detenga,
    debido a que en el cuerpo de la funcion esta se llama a si misma muchas veces, regresa al inicio como
    si fuera ejecutada una y otra vez.
*/
int sumaRecursiva(int n){
    if(n==1){
        return 1;
    }
    else{
        return n + sumaRecursiva(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    int sumaTotal = sumatoria(n);
    return 0;
}
