#include <iostream>
using namespace std;

int main()
{
    string linea;
    getline(cin,linea);
    int letras[26]={0};
    for(int i=0;i<linea.length();i++)letras[toupper(linea[i])-65]++;
    for(int i=0;i<26;i++)cout<<letras[i]<<" "<<(char)(65+i)<<endl;
    return 0;
}