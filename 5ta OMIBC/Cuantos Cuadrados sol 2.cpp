#include <iostream>
using namespace std;
typedef unsigned long long ULL; //definicion de tipo (alias) soporte para valores muy grandes de n
ULL contar(ULL n){ //solucion 2
    ULL suma = 0;
    for(ULL i=1;i<=n;i++){
        suma+=(i*i);
    }
    return suma;
}
int main(){
  int n;
  cin>>n;
  cout << contar(n);
  return 0;
}
