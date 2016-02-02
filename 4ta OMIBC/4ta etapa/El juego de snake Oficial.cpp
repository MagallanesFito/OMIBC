#include <iostream>
using namespace std;

#define op_io ios_base::sync_with_stdio(0);cin.tie(0);

typedef long long int32;
typedef struct elemento{
    int32 valor;
    struct elemento *izq;
    struct elemento *der;
}*Elemento;

void mostrarElementos(Elemento head){
    //Recorrido inOrden
    if(head != NULL){
        mostrarElementos(head->izq);
        cout << head->valor << " ";
        mostrarElementos(head->der);
    }
}
Elemento creaNuevoElemento(int32 valor){
    Elemento aux = new (struct elemento);
    aux->valor = valor;
    aux->der = NULL;
    aux->izq = NULL;

    return aux;
}
void addElemento(Elemento &head,int32 claveElemento){

        if(head == NULL){
            head = creaNuevoElemento(claveElemento);
            return;
        }
        else{
            if(claveElemento > head->valor){
                addElemento(head->der,claveElemento);
            }
            else{
                addElemento(head->izq,claveElemento);
            }
        }
}
Elemento encuentraMenor(Elemento head){
    Elemento aux = head;
    while(aux->izq != NULL) aux = aux->izq;

    return aux;
}
void eliminaElemento(Elemento &head,int32 valor){
    if(head == NULL) return;
    if(valor < head->valor) eliminaElemento(head->izq,valor);
    else if(valor > head->valor) eliminaElemento(head->der,valor);
    else if(valor == head->valor){
        if(head->izq == NULL && head->der == NULL){
            delete head;
            head = NULL;
        }
        else if(head->izq == NULL){
            Elemento aux = head;
            head = head->der;
            delete aux;
        }
        else if(head->der == NULL){
            Elemento aux = head;
            head = head->izq;
            delete aux;
        }
        else{
            Elemento  aux = encuentraMenor(head->der);
            head->valor = aux->valor;
            eliminaElemento(head->der,aux->valor);
        }
    }
    else return;
    //return head;
}
int main(){
    op_io
    long int n;
    int comando;
    int32 valor;
    cin>>n;
    Elemento head = NULL;
    while(n--){
        cin>>comando;
        if(comando!=0) cin>>valor;
        switch(comando){
        case 0:
            mostrarElementos(head);
            cout << "\n";
            break;
        case 1:
            addElemento(head,valor);
            break;
        case 2:
            eliminaElemento(head,valor);
            break;
        }
    }
    return 0;
}