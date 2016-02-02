#include <iostream>
#include <string>

using namespace std;

int main()
{
    string bicho;
    cin>>bicho;
    int cont=0;
    for(int i=0;i<bicho.length(); i++)
    {
        if(bicho[i]=='c'||bicho[i]=='u'||bicho[i]=='d'||bicho[i]=='t'||bicho[i]== 'a'||bicho[i]=='e'||bicho[i]=='s'||bicho[i]=='i'||bicho[i]=='o'||bicho[i]=='n')
        {
            cont++;
        }
    }
    if((bicho[0]=='+'||bicho[0]=='-'||bicho[bicho.length()-1]=='+'||bicho[bicho.length()-1]=='-')&&bicho.length()!=1)
    {
        cont++;
    }
    if(cont==bicho.length())
    {
        cout<<'S';
    }
    else
    {
        cout<<'N';
    }
}
