#include <iostream>
using namespace std;
typedef unsigned long long ULL; //SOPORTE PARA VALORES DE N MAYORES
ULL contar(ULL n){ //solucion 1
    return n*(n+1)*(2*n + 1)/6;
}
int main(){
    ULL n;
    cin>>n;
    cout << contar(n);
    return 0;
}
