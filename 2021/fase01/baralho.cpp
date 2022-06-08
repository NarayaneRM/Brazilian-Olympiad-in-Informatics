#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
  char naipe;
  int num;
  bool erro[4]={true,true,true,true};
  char input[156]={NULL};
  int naipe_c[14]={0};
  int naipe_e[14]={0};
  int naipe_u[14]={0};
  int naipe_p[14]={0};
  int faltas[4]={0};
  int i=0;
  
  cin.getline(input,156);
  
  do{
    num=(int(input[i])-48)*10+(int(input[i+1])-48);
    naipe=input[i+2];
    
    if(naipe=='C'){
      if(naipe_c[num]==0){
        naipe_c[num]=num;
      }
      else {
        erro[0]=false;
      }
    }
    
    else if(naipe=='E'){
      if(naipe_e[num]==0){
        naipe_e[num]=num;
      }
      else {
        erro[1]=false;
      }
    }
    
    else if(naipe=='U'){
      if(naipe_u[num]==0){
        naipe_u[num]=num;
      }
      else {
        erro[2]=false;
      }
    }
    
    else if (naipe=='P'){
      if(naipe_p[num]==0){
        naipe_p[num]=num;
      }
      else {
        erro[3]=false;
      }
    }
    i+=3;
  } while(input[i]!=NULL);
  
  for (i=1;i<=13;i+=1){
    if(naipe_c[i]==0){
      faltas[0]+=1;
    }
    if(naipe_e[i]==0){
      faltas[1]+=1;
    }
    if(naipe_u[i]==0){
      faltas[2]+=1;
    }
    if(naipe_p[i]==0){
      faltas[3]+=1;
    }
  }
  for (i=0;i<=3;i+=1){
    if(erro[i]==false){
      cout<<"erro\n";
    }
    else{
      cout<<faltas[i]<<"\n";
    }
  }
}