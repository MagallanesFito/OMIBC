#include <iostream>

using namespace std;
long long int inversora(long long int n)
{
    long long int res=0;
    while(n>0)
    {
        res+=n%10;
        if(n>=10)res*=10;
        n=n-(n%10);
        n/=10;
    }
    return res;
}
int main()
{
    long long int n;
    cin>>n;
    cout<<inversora(n);
    return 0;
}
