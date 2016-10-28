#include <iostream>
using namespace std;
typedef unsigned long long ULL;
ULL sol3(ULL n){ //solucion 3 recursiva
    if(n==1) return 1;
    if(n == 0) return 0;
    else return n*n + sol3(n-1);
}
int main(){
  return 0;
}
