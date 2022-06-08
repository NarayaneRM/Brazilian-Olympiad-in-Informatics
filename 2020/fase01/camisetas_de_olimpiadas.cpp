#include <iostream>
using namespace std;

int main() {
  int N,T,P,M;
  int P_real=0,M_real=0;
  int i;

  cin>>N;

  for(i=0;i<N;i++){
    
    cin>>T;
    
    if (T==1){
      P_real+=1;
    }
    else {
      M_real+=1;
    }
  }

  cin>>P;
  cin>>M;
  
  if(P==P_real && M==M_real){
    cout<<"S";
  }
  else {
    cout<<"N";
  }
}
