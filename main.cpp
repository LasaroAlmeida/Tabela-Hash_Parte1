#include <iostream>
#include "hash.h"
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
void gerencia()
{
    int tam=-1,num_elementos=-1,aux;
    while(true)
    {
        while(tam<1)
        {
            cout<<"Tamanho da Tabela: ";
            cin>>tam;
        }
        while(num_elementos<1)
        {
            cout<<"Numero de Elementos :";
            cin>>num_elementos;
        }
        HashTable tabela[3];

        tabela[0].create(tam,0);
        tabela[1].create(tam,1);
        tabela[2].create(tam,2);

        srand(time(NULL));
        int temp;
        for(int i=0; i<num_elementos;)
        {
            temp=(rand()%20000000);
            if(tabela[0].get_num_elementos()< num_elementos)
            {
                tabela[0].inserir(temp);
                tabela[1].inserir(temp);
                tabela[2].inserir(temp);
                i++;
            }
        }
        string hashs[]= {"Divisao", "Multiplicacao", "MinhaHash"};
        cout<<endl;
        for(int i=0; i<3; i++)
        {
            cout<<setw(15)<<left<<hashs[i]<<setw(11)<<"ÜÜÜÜÜÜÜÜÜÜÜÜ "<<right<<tabela[i].numero_colisoes()<<" colisao(oes)"<<endl;
        }
        tam=-1;
        num_elementos=-1;
        cout<<"\nDigite -1 para sair ou 0 para continuar: "<<endl;
        cin>>aux;
        if(aux==-1)
            break;
    }
}

int main()
{
    cout<<"Tabela Hash"<<endl;
    gerencia();
    return 0;
}

