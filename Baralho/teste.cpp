#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
  char input [10];
  int a;
  
  cout<<"Digite: ";
  cin.getline(input,3);
  a=stoi(input[0])+stoi(input[2]);
  cout<<"\n"<<a;
}