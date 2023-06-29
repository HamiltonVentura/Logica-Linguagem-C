
#include<stdio.h>
#include<iostream>

struct cadastro_livro {
    int numero;
    int tel;
    char nome[23];
    char autor[34];               
    char doador [32];
};

struct cadastro_aluno {
    char nome [25];
    char turma[12];
    int tel;
    int cpf;
    char end[34];
};                                 

struct cadastro_livro a[2];
struct cadastro_aluno b[2];
 
//sumona e não esquecer de salvar como um bamco de dados
int cadastrosemenu(){
    printf("[1] cadastros aluno");
    printf("[2] cadastros livros");   
    return 0;
}

       
    int cadastro_aluno(void){
    char ent[32];
    for(int i=0;i<=2;i++){
        printf("digite o nome do aluno -");
        gets (b[i].nome);                            
        printf("\t\t digite o telefone do aluno -");
        b[i].tel=atoi(gets(ent));
        cout<<" turma -"
        (b[i].turma);
      }
       system("pause");
    return 0;
   }
                            
      int cadastro_livros (void){
      for(int i=0;i<=2;i++){
        cout<<"entre o nome do livro -";
        gets (a[i].nome);
        cout<<"entre o autor -"(a[i].autor);
                      cout<<"o doador -";
                      (a[i].doador);   }
                      system("pause");
                      return 0;}
                      
                      int main (){
                      int i;
                      char ent[34];
                      cout<<"\t\t\t Menu";
                      cout<<"programa biblioteca";
                      cout<<"[1]cadastros";
                      cout<<"[2] procurar";
                      
                      
                      system("pause");
                      return 0;}
                      
