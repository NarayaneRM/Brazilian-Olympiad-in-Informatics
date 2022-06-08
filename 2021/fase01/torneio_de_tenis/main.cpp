#include <iostream>
using namespace std;

int main() {
  int i;
  char partida;
  int vencidas=0;
  int perdidas=0;
  int grupo;

  for(i=0;i<6;i++){
    cin>>partida;
    if(partida=='V'){
      vencidas+=1;
    }
    else if(partida=='P'){
      perdidas+=1;
    }
  }

  if (vencidas==0){
    grupo=-1;
  }
  else if (vencidas<=2){
    grupo=3;
  }
  else if (vencidas<=4){
    grupo=2;
  }
  else if (vencidas<=6){
    grupo=1;
  }

  cout<<grupo;
}
