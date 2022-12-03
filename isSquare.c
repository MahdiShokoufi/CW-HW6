#include <stdio.h>

int isSquare(int x){
  for (int i = 1; i <= x; i ++)
    if (i * i == x)
      return 1;
  return 0;
}

int main(){
  return 0;
}
