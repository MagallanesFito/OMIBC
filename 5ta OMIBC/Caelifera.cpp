#include <iostream>
using namespace std;

const string numeros = "0123456789";
void solve(int n,string x){
    if(n==0){
        cout << x << endl;
        return;
    }
    else{
        for(int i=1;i<=n;i++){
            x = x + numeros[i];
            solve(n-i,x);
            x  = x.substr(0,x.length()-1);
        }
    }
}
int main(){
    int n;
    cin>>n;
    solve(n,"");
    return 0;
}
