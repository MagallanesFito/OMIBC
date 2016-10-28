#include <iostream>
using namespace std;
typedef unsigned long long ULL;
ULL sol1(ULL n){ //solucion 1
    return n*(n+1)*(2*n + 1)/6;
}
ULL sol2(ULL n){ //solucion 2
    long long suma = 0;
    for(int i=1;i<=n;i++){
        suma+=(i*i);
    }
    return suma;
}
ULL sol3(ULL n){ //solucion 3
    if(n==1) return 1;
    if(n == 0) return 0;
    else return n*n + sol3(n-1);
}
int main(){
    ULL n;
    cin>>n;
    cout << sol3(n);
    return 0;
}
