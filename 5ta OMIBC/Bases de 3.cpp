#include <iostream>
using namespace std;

void transformar(int n){
    if(n==1 || n==2 || n==0) cout << n;
    else{
        transformar(n/3);
        cout << n%3;
    }
}
int main(){
    int n;
    cin>>n;
    transformar(n);
    return 0;
}
