#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> serpiente;
int main()
{
    int n,comando,valor;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>comando;
        if(comando==0)
        {
            sort(serpiente.begin(),serpiente.end());
            for(int a=0;a<serpiente.size();a++)cout<<serpiente[a]<<" ";
            cout<<endl;
        }
        else if(comando==1)
        {
            cin>>valor;
            serpiente.push_back(valor);
        }
        else if(comando==2)
        {
            cin>>valor;
            int a;
            for(a=0;a<serpiente.size();a++)if(serpiente[a]==valor)break;
            serpiente.erase(serpiente.begin()+a);
        }
    }
    return 0;
}
