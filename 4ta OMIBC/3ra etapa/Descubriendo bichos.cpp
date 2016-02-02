#include <iostream>

using namespace std;
bool clasifica(string cadena)
{
    for(int i=0;i<cadena.length();i++)
    {
        if(i==0&&(cadena[0]=='+'||cadena[0]=='-'))continue;
        char c=cadena[i];
        if(c!='c'&&c!='u'&&c!='d'&&c!='t'&&c!='a'&&c!='e'&&c!='s'&&c!='i'&&c!='o'&&c!='n')return false;
    }
    if(cadena.length()==1&&(cadena[0]=='+'||cadena[0]=='-'))return false;
    return true;
}
int main()
{
    string s;
    cin>>s;
    if(clasifica(s))cout<<"S";
    else cout<<"N";
    return 0;
}