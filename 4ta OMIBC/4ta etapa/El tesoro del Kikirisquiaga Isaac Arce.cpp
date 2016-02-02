#include <bits/stdc++.h>

using namespace std;
unsigned long long M=1000000000;
int main()
{
    unsigned long long n;
    cin>>n;
    unsigned long long *F=new unsigned long long[n+1];
    F[0]=1,F[1]=3;
    if(n)
    {
        if(n%2)
        {
            cout<<0;
        }
        else
        {
            for(unsigned long long i=1;i<n/2+1;i++)
            {
                F[i+1]=4*F[i]-F[i-1];
            }
            cout<<F[n/2]%M;
        }
    }
    else
    {
        cout<<1;
    }
    delete[] F;
}
