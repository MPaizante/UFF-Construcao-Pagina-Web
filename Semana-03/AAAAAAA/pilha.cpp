#include <iostream>
#include "pilha.h"

using namespace std;





    pilha::pilha()//construtora
    {
        tamanho = 0;
        estrutura = new TipoItem[max_itens];
    }

    pilha::~pilha()//destrutora
    {
        delete []estrutura;
    }

    bool pilha::estaCheia()//verifica se a pilha esta cheia
    {
        return (tamanho == max_itens);
    }

    bool pilha::estaVazia()//verifica se a pilha esta vazia
    {
        return (tamanho == 0);
    }

    void pilha::inserir(TipoItem item)//push
    {
        if( estaCheia()){
           
            count << "A pilha está cheia!\n"
            count << "Não é possivel inserir esse elemento!\n"

        }else{
            estrutura[tamanho] = item;
            tamanho ++;

        }
    }

    TipoItem pilha::remover()//pop
    {
        if(estaVazia()){
             return 0;
            count <<"A pilha está vazia.\n";
            count <<"Não tem elemento para ser removido!\n";

        }else{
            return estrutura[tamanho-1];
            tamanho --;
        }
    }

    void pilha::imprimir()//print
    {
        count <<"Pilha: [";
        for (int i=0; i<tamanho;i++){
            count << estrutura[i]<<" ";
        }
        count << "]\n";
    }
    
    int pilha::qualTamanho()//lenght
    {
        return tamanho;
    }