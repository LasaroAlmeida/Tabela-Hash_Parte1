#include <iostream>
#include "hash.h"
#include <math.h>
using namespace std;

HashTable::HashTable()
{
}

HashTable::~HashTable()
{
    destroy();
}
void HashTable::create(int m, int hash)
{
    tabela=new List[m];
    tam=m;
    op=hash;

}

void HashTable::destroy()
{
    for(int i=0; i<tam; i++)
    {
        tabela[i].~List();
    }
    delete [] tabela;
}


No *HashTable:: insert(int key,int data)
{
    No *t= new No();
    t->setInfo(data);
    t->setProx(NULL);
    if(!tabela[key].pesquisa(data))
    {
        return t;
    }
    return NULL;
}


void HashTable::inserir(int num)
{
    int aux;
    switch(op)
    {
    case 0:
        aux=hashdiv(num);
        break;
    case 1:
        aux=hashMult(num);
        break;
    case 2:
        aux=hashTranformaRaiz(num);
        break;
    default:
        cout<<"Erro"<<endl;
    }
    No *a=insert(aux,num);
    if(a!=NULL)
    {
        tabela[aux].insere(a);
        num_elementos+=1;
    }


}

void HashTable::imprime()
{
    for(int i=0; i<tam; i++)
    {
        cout<<"Hash "<<i<<" ";
        tabela[i].imprime();
    }
}
int HashTable::hashdiv(int num)
{
    return num%tam;
}

int HashTable::hashMult(int num)
{
    double c=((sqrt(5)-1)/2) * num;
    c=c-(int)c;
    c=c*tam;
    return  c;

}
int HashTable::hashTranformaRaiz(int num)
{
    int aux=muda_Base(num);
    int t=hashdiv(aux);
    return hashdiv(aux);
}

int HashTable::muda_Base(int num)
{
    int divisor=8, quociente=num;
    int vet[10];
    int i=9;
    if(num<divisor)
        return num;
    while(quociente>=divisor)
    {
        vet[i]=quociente%divisor;
        quociente=quociente/divisor;
        i--;
        if(quociente<divisor)
            vet[i]=quociente;

    }

    int a=0;
    int  b=0;

    int gambi=0;
    for(int j=9; j>=i; j--)
    {
        gambi=vet[j];
        gambi*=pow(10,b);
        b+=1;
        a+=gambi;
    }
    return a;
}

No *HashTable::lookup(int key, int data)
{
    No *p=new No();
    p->setInfo(data);
    p->setProx(NULL);
    return tabela[key].pesquisa(p);

}

int  HashTable::numero_colisoes()
{
    for(int i=0; i<tam; i++)
    {

        if(tabela[i].get_tamanho()>0)
            colisoes+=tabela[i].get_tamanho();
    }
    return colisoes;
}

int HashTable::get_num_elementos(){
   return num_elementos;
}
