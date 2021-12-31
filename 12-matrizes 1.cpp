#include <iostream.h>
int main (void)
{
    float MD[8], SOMA, MEDIA;
    int I;
    char LETRA;
    cout<<"calculo de média escalar"<<endl;
    for ( I=0; I<=7; I++)
    {
        cout <<"imforme a "<<I+ 1<<"a.nota:";
        cin >> MD[I];
        SOMA += MD[I];
        }
        MEDIA+=SOMA/8;
        cout<<"\nA media do grupo equivavale a :";
        cout <<MEDIA<<endl;
        cout <<"\nTecle <f> + <enter> para finalizar o programa ";
        do 
        {
             LETRA=cin.get();
             LETRA=toupper (LETRA);
             }
             while (LETRA !='F');
             system ("pause");
             return 0;
             }
