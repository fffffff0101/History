#include <stdio.h>

int main() {
  int count[42] = {0,};
  int in_num = 0;
  int result = 0;
  for(int i = 0; i < 10; i++){
    scanf("%d", &in_num);
    count[in_num%42] = 1;
  }
  for(int i = 0; i < sizeof(count)/4; i++){
    if(count[i] == 1){
      result++;
    }
  }
  printf("%d\n", result);
  return 0;
}