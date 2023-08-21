#include <iostream>
#include "pilhaExemplo.hpp"
using namespace std;

int main(){

    pilha pilha1;

    TipoItem item;
    int opcao;
    cout << "Programa gerador de Pilhas" << endl;

    do{
        cout << "Digite 0 para parar o programa" << endl;
        cout << "Digite 1 para parar inserir um elemento" << endl;
        cout << "Digite 2 para parar remover um elemento" << endl;
        cout << "Digite 3 para parar imprimir a Pilha" << endl;
        cin >> opcao;
        if (opcao == 1){
            cout << "Digite o elemento a ser inserido: " << endl;
            cin >> item;
            pilha1.inserir(item);
        }else if (opcao == 2){
            item = pilha1.remover();
            cout << "Elemento removido: " << item << endl;
        }else if (opcao == 3){
            pilha1.imprimir();
        }

    }while(opcao != 0);

    return 0;
}
