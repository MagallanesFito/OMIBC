#include <iostream>

using namespace std;
string expresion;
int pos=-1;
int eval();
char peek(){return((int)expresion.size()<=pos)?0:expresion[pos+1];}
char car(){return((int)expresion.size()<=pos)?0:expresion[++pos];}
int num()
{
    int n=0;
    int c=peek()-'0';
    while(c>=0&&c<=9)
    {
        c=car()-'0';
        n*=10;
        n+=c;
        c=peek()-'0';
    }
    return n;
}
int sel()
{
    char c=peek();
    if(c>='0'&&c<='9')return num();
    else
    {
        car();
        int r=eval();
        car();
        return r;
    }
    return 0;
}
int multip()
{
    int f1=sel();
    char c=peek();
    while(c=='*'||c=='/')
    {
        if(car()=='*')f1*=sel();
        else f1/=sel();
        c=peek();
    }
    return f1;
}
int eval()
{
    int n=multip();
    char c=peek();
    while(c=='+'||c=='-')
    {
        if(car()=='+')n+=multip();
        else n-=multip();
        c=peek();
    }
    return n;
}
int main()
{
    cin>>expresion;
    cout<<eval();
    return 0;
}
