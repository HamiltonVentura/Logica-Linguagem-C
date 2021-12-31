#include<iostream.h>
#include<cctype>

int main (void)
{
    int idade=25;
    int *pidade=0;
    
    pidade=&idade;
    
    cout<<"o valor idade :"<<idade<<" esta armezenado no ";
    cout<<" endereco de memoria "<<pidade<<endl;
    cout<<endl;
    system("pause");
                    return 0;}
