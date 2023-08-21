      #include <iostream>
      #include "pilhaExemplo.hpp"
      using namespace std;
      
        pilha::pilha(){

            tamanho = 0;
            estrutura = new TipoItem[max_itens];

        }

        pilha::~pilha(){

            delete [] estrutura;
        }

        bool pilha::estacheia(){

            return(tamanho == max_itens); //comparando. Se está cheio vai retornar true
        }
        
     
        bool pilha::estavazia(){
            
            return(tamanho == 0); //comparando. Se está vazio vai retornar true
        }
        
        void pilha::inserir(TipoItem item){

            if(estacheia()){
                cout << "A pilha esta cheia..." << endl;
            }else{
                estrutura[tamanho] = item;
                tamanho++;
            }
        }
        
        TipoItem pilha::remover(){

            if(estavazia()){
                cout << "A pilha esta vazia..." << endl;
                return 0;
            }else{
                tamanho--;
                return estrutura[tamanho-1];
            }
        }
        
        void pilha::imprimir(){

            cout << "Pilha: [ ";
            for (int i=0; i<tamanho; i++){
                cout << estrutura[i] << " ";
            }
            cout << " ]" << endl;
        }
       
        TipoItem pilha::qualtamanho(){

            return tamanho;
        }