#include <iostream>
using namespace std;

int main() {
  int input;
  int N, K, U;
  int parada;

  cin>>N;
  cin>>K;
  cin>>U;
  
  int cartela[N][K];
  int i,j,x,y;
  int sorteio[U];
  
  for (i=0;i<N;i++){
    for (j=0;j<K;j++){
      cin>>cartela[i][j];
  }
  }
  
  for (i=0;i<U;i++){
    cin>>sorteio[i];
  }


  int pontos[N];
  for (i=0;i<N;i++){
    pontos[i]=0;
  }
  bool teste=false;
  
  for (x=0;x<U;x++){
    for (i=0;i<N;i++){
      for (j=0;j<K;j++){
        if (cartela[i][j]==sorteio[x]){
          pontos[i]=1+pontos[i];
        }
      }
    }
    for (y=0;y<N;y++){
      if (pontos[y]==K){
          cout<<y+1<<" ";
        teste=true;
      }
    }
    if(teste==true){
   break;
  }
 }
}
