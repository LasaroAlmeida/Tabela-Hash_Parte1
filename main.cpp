#include <iostream>
#include "hash.h"
using namespace std;

int main(int arc, char* argv[])
{
	cout<<"Tabela Hash"<<endl;
	HashTable a;
	///1->Divisao /// 2->Multiplicacao /// 3-> Transformacao de Raiz

   a.create(7,0);
   for(int i=0;i<10;i++){
       a.inserir(i);
   }
   a.imprime();
   return 0;
}

