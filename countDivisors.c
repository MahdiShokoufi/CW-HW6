#include <stdio.h>

int countDivisors(int x){
  int cnt = 0;
  for (int i = 1; i <= x; i ++)
    if (x % i == 0)
      cnt ++;
  return cnt;
}

int main(){
  return 0;
}
