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
int List::get_tamanho(){
return tamanho;
}
void List::insere(No *p)
{

    if(last!=NULL)
    {
        last->setProx(p);
    }
    last=p;
    if(first==NULL)
    {
        first=p;
    }
    tamanho+=1;

}
bool  List::pesquisa(int num){
   for(No * atual=first;atual!=NULL;atual=atual->getProximo()){
       if(atual->getInfo()==num){
        return true;
       }
   }
   return false;
}
No *List::pesquisa(No *p){
    for(No * atual=first;atual!=NULL;atual=atual->getProximo()){
       if(atual==p){
        return atual;
       }
   }
   return NULL;

}
void List::imprime(){
   for(No *aux=first;aux!=NULL;aux=aux->getProximo()){
    cout<<aux->getInfo()<<"->";
   }
   cout<<endl;
}
