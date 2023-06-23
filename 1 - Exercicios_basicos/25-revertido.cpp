#include<iostream.h>
int main(){
    
    char a[10];
    gets(a);
    int i,n;
    n=strlen(a);
    for(i=0;i<n;i++){
        if(a[i]=='a')a[i]='b';
    }
     puts(a);
    system("pause");}
