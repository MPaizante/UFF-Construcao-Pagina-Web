#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    pilha pilha1;
    TipoItem item;
    int opcao;
    cout <<"Programa gerador de pilha:\n"

    do{
        count <<"Digite 0 para parar o programa!\n"
        count <<"Digite 1 para inserir elemento!\n"
        count <<"Digite 2 para remover elemento!\n"
        count <<"Digite 3 para imprimir a pilha\n"
        cin >> opcao;
        if(opcao ==1){
            cin >> item;
            pilha1.inserir(item);
        }else if (opcao == 2){
            item = pilha1.remover();
            count << "elemento removido" << item << endl;
        }else if(opcao == 3){
            pilha1.imprimir();
        }
    }while (opcao != 0);
    
    

    return 0;
}