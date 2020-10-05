#include <iostream>
#include "hash.h"

using namespace std;

HashTable::HashTable(){
}
void HashTable::create(int m, int hash){
    cout<<"Tamanho: "<<m<<endl;
    cout<<"Opcao: "<<hash<<endl;
    tabela=new List[m];
    tam=m;
    op=hash;

}
No *HashTable:: insert(int key,int data){

}


void HashTable::inserir(int num){
  int aux=hashdiv(num);
  if(!tabela[aux].pesquisa(num)){
    tabela[aux].insere(num);
  }
}
void HashTable::imprime(){
  for(int i=0;i<tam;i++){
    cout<<"Hash "<<i<<" ";
    tabela[i].imprime();
  }
}
int HashTable::hashdiv(int num){
    return num%tam;
}

int HashTable::hashMult(int num){
}
