#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "No.h"
class List{
   public:
      List();
      ~List();
      void insere(No *p);
      bool pesquisa(int num);
      void imprime();
      No *pesquisa(No *p);
      int get_tamanho();


   private:
       No *first;
       No *last;
       int tamanho=-1;


};


#endif // LIST_H_INCLUDED
