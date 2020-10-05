#ifndef NO_H_INCLUDED
#define NO_H_INCLUDED
class No
{
public:
    No()  {};
    ~No()  {};
    int getInfo()
    {
        return data;
    };
    No *getProximo()
    {
        return proximo;
    };
    void setInfo(int num)
    {
        data=num;
    };
    void setProx(No *prox)
    {
        proximo=prox;
    }


private:
    int data;
    No *proximo;
};


#endif // NO_H_INCLUDED
