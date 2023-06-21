#include<iostream.h>
 
 
  float temp_celcios (float c){
        float f;
        f=(9*c+160)/5;
        cout<<"a temperatura em fireheite he:"<<f<<endl;
        system("pause");
        }
        
        
        int main (){
            system("color 02");
            float c;
            cout<<"apresente a temperatura em celcios"<<endl;
            cin>>c;
            temp_celcios (c);
            return 0;
            system("pause");} 
