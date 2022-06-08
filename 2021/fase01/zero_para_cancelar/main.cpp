#include <iostream>
using namespace std;

int main() {
  int input;
  int lines;
  int numbers[100];
  int resultado=0;
  int i;
  int j;

  cin>>input;
  cin.ignore();
  lines=int(input);

  for(i=0;i<lines;i++){
    cin>>input;
    cin.ignore();
    numbers[i]=int(input);
  }
  
  for(i=0;i<lines;i++){
    if(numbers[i]==0){
      resultado-=numbers[i-1];
      for (j=i-1;j<lines;j++){
        numbers[j]=numbers[j+2];
      }
      i-=2;
      lines-=2;
    }
    else{
      resultado+=numbers[i];
    }
  }
  cout<<resultado;
}
