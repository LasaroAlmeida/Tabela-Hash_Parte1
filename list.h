#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
#include "No.h"
class List{
   public:
      List();
      ~List();
      void insere(int key);
      bool pesquisa(int num);
      void imprime();

   private:
       No *first;
       No *last;


};


#endif // LIST_H_INCLUDED
