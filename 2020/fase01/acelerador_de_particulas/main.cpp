#include <iostream>
using namespace std;

int main() {
  int dist;
  int parada;

  cin>>dist;

  parada=(dist-5)%8;
  cout<<parada;
}
