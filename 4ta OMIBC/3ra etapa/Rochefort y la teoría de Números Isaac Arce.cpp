#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    string Palabra;
    getline(cin,Palabra);
    for(int i=0;i<floor((Palabra.length())/2);i++)
    {
        swap(Palabra[i],Palabra[Palabra.length()-1-i]);
    }
    cout<<Palabra;
}
