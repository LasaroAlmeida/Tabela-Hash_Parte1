#include <iostream>
#include "hash.h"
#include <stdlib.h>
#include <time.h>
using namespace std;
void gerencia(HashTable a){
    int tam,num_elementos,op;
    cout<<"Tamanho da Tabela: ";
    cin>>tam;
    cout<<"Numero de Elementos :";
    cin>>num_elementos;
    cout<<"Digite:\n0->Hash da Divisao\n1->Hash da Multiplicacao\n2->Hash da Transformacao de Raiz"<<endl;
    cin >> op;


    srand(time(NULL));
    int temp;
    /*for(int i=0; i<this->tam; i++)
    {
        temp=(rand()%200000)+(-5000);
        vet[i]=auxiliar[i]=temp;
    }*/
}

int main()
{
	cout<<"Tabela Hash"<<endl;
	HashTable a;
	///0->Divisao /// 1->Multiplicacao /// 2-> Transformacao de Raiz

   a.create(7,0);
   for(int i=0;i<10;i++){
       a.inserir(i);
   }
   a.imprime();
   cout<<a.numero_colisoes()<<endl;
   return 0;
}

