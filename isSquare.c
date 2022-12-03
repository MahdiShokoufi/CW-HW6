#include <stdio.h>

int isSquare(int x){
  int i = 1;
  while (i * i < x)
    i ++;
  return i * i == x;
}

int main(){
  return 0;
}
