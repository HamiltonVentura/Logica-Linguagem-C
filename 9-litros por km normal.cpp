#include<iostream.h>
int main (){

    float distancia,tempo, velocidade;
    float litros_usados;
    cout<<"\t\tprograma km percorrido\n";
    cout<<"entre o tempo gasto -";cin>>tempo;
    cout<<"entre a velocidade media"<<endl;
    cin>>velocidade;
    
    distancia=tempo*velocidade;
    cout<<"a distancia he"<<distancia<<endl;
    litros_usados=distancia/12;
    cout<<"esse carro faz "<<litros_usados<<"km por litro";
    system("pause");
    return 0;}
    
    

