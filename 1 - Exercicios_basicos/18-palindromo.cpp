#include<iostream.h>

int main(){
    char palavra[20];
    int j, i=0,c,para=0;
    cin>>palavra;
    c=strlen(palavra);
 
    j=c-1;
    
    do{
          if(palavra[i]!=palavra[j])para=1;
          if(j==1||(j-1)==i)c=1;
          j--;
          i++;
    } while(c!=1);
          if(para==1) cout<<"Nao eh um palindromo"<<endl;
          else cout<<"Eh um palindromo"<<endl;
          system("pause");
          }
