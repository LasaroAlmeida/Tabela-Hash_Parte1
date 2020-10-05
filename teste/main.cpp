#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    for(int i=0;i<2020;i++){
        cout<<(long long int)pow(i,3)%10<<endl;
    }
    return 0;
}
