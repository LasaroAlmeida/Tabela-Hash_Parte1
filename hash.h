#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
#include "list.h"
#include "No.h"
class HashTable{
  public:
      HashTable();
      void create(int m,int hash);
      No * insert(int key, int data);
      void inserir(int num);
      int hashdiv(int num);
      int hashMult(int num);
      int hashTranformaRaiz(int num);
      void imprime();


  private:
    List *tabela;
    int colisoes[3]={0};
    int tam;
    int op;///1->Divisao /// 2->Multiplicacao /// 3-> Transformacao de Raiz

};


#endif // HASH_H_INCLUDED
