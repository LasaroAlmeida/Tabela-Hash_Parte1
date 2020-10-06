#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED
#include "list.h"
#include "No.h"
class HashTable
{
public:
    HashTable();
    ~HashTable();
    void create(int m,int hash);
    No * insert(int key, int data);
    void inserir(int num);
    int hashdiv(int num);
    int hashMult(int num);
    int hashTranformaRaiz(int num);
    void imprime();
    No *lookup(int key,int data);
    void destroy();
    int numero_colisoes();


private:
    List *tabela;
    int colisoes=0;
    int tam;
    int op;///1->Divisao /// 2->Multiplicacao /// 3-> Transformacao de Raiz
    int muda_Base(int num);

};


#endif // HASH_H_INCLUDED
