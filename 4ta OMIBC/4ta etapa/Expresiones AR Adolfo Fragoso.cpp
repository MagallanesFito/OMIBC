#include <iostream>
#include <cstdlib>
#include <cstring>
#define MAX_N 10000
using namespace std;

char S[MAX_N];
int Operaciones[MAX_N];
int jerarquia(char op){
  if(op == '*' || op=='/') return 2;
  else if(op == '+' || op == '-') return 1;
  else if(op == '(' || op == ')') return 0;
}
string transformar(string exp){
    int top = 0;
    char actual;
    string result;
    int i = 0;
    while(i<exp.length()){
        actual = exp[i];
        if(actual == '(') S[top++] = '(';
        else if(isdigit(actual)){
            int k = i;
            while(isdigit(exp[k])){
                result+=exp[k];
                k++;
            }
            result+='|';
            i = k;
            continue;
        }
        else if(actual == ')'){
            while(S[top-1] != '(' && top > 0) result+=S[--top];
            top--;
        }
        else if(strchr("+-*/",actual) != NULL){
            while(jerarquia(actual) <= jerarquia(S[top-1]) && top > 0) result+=S[--top];
            S[top++] = actual;
        }
        i++;
    }
    while(top > 0) result+= S[--top];
    return result;
}
int calcular(string e){
    int top = 0;
    int i=0;
    string expresion = transformar(e);
    while(i<expresion.length()){
        char actual = expresion[i];
        if(isdigit(actual)){
            int k = i;
            string numero;
            while(isdigit(expresion[k])){
                numero += expresion[k];
                k++;
            }
            i = k;
            Operaciones[top++] = atoi(numero.c_str());
            continue;
        }
        else if(actual != '|'){
            int b = Operaciones[--top];
            int a = Operaciones[--top];
            int c;
            if(actual == '+') c = a+b;
            if(actual == '-') c = a-b;
            if(actual == '*') c = a*b;
            if(actual == '/') c = a/b;
            Operaciones[top++] = c;
        }
        i++;
    }
    return Operaciones[top-1];
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string expresion;
    cin>>expresion;
    cout << calcular(expresion);
    return 0;
}
