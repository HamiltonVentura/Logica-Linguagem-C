#include<iostream.h>
//prova refeita questão 1
int main(){
   int N; float p;
    do{
          cout<<"entre numero"<<endl;
          cin>>N;
          
          if((N>0) && (N%2)==0){
                               cout<<"numero par";
                               cout<<endl;
                               }
                               else if((N>0) && (N%2)==1){
                                    cout<<"numero impar";
                                    cout<<endl;}
                                    else if (N<0){
                                         cout<<"fim do programa"<<endl;
                                         system("pause");
                                         return 0;}
                                         
                                         cout<<"deseja continuar[1], sair [-1]";
                                         cin>>p;
                                         }
                                         while(p>0);
                                        
                                        
                                         system("pause");
                                         return 0;}
                                    
          
