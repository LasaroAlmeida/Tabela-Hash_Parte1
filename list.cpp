#include <iostream>
#include "list.h"

using namespace std;
List::List()
{
    first=last=NULL;

}
List::~List()
{
    No *aux=last;
    while(aux!=NULL)
    {
        No *a= aux->getProximo();
        delete aux;
        aux=a;
    }
}
void List::insere(int key)
{
    No *aux=new No();
    aux->setInfo(key);
    aux->setProx(NULL);
    if(last!=NULL)
    {
        last->setProx(aux);
    }
    last=aux;
    if(first==NULL)
    {
        first=aux;
    }

}
bool List::pesquisa(int num){
   for(No * atual=first;atual!=NULL;atual=atual->getProximo()){
       if(atual->getInfo()==num){
        return true;
       }
   }
   return false;

}
void List::imprime(){
   for(No *aux=first;aux!=NULL;aux=aux->getProximo()){
    cout<<aux->getInfo()<<"->";
   }
   cout<<endl;
}
