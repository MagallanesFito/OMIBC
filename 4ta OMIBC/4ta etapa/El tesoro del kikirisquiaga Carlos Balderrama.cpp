#include <iostream>

using namespace std;
int main()
{
    unsigned long long int a1=1;
    unsigned long long int a2=3;
    unsigned long long int n;
    cin>>n;
    if(n%2==1)cout<<0;
    else
    {
        for(unsigned long long int i=2;i<n;i+=2)
        {
            unsigned long long int r=((4*a2)-a1);
            a1=a2;
            a2=r;
        }
        cout<<(a2%1000000000);
    }
    return 0;
}
