#include <iostream>
using namespace std;
typedef unsigned long long int ULL;

/*ULL D[100000002];
ULL A[100000002];*/

ULL D[10000002];
ULL A[10000002];
ULL solve(int n){
    A[0] = 0;
    A[1] = 1;
    D[0] = 1;
    D[1] = 0;
    for(int i=2;i<=n;i++){
        A[i] = D[i-1] + A[i-2];
        D[i] = D[i-2] + 2*A[i-1];
    }
    return D[n]%1000000000;
}
int main(){
    ULL n;
    cin>>n;
    ULL res = solve(n);
    cout << res;
    return 0;
}