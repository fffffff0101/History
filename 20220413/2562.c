#include <stdio.h>

int main() {
  int save[9] = {0,};
  int result = -1;
  int index = -1;
  for(int i = 0; i < sizeof(save)/4; i++){
    scanf("%d", &save[i]);
  }
  for(int i = 0; i < sizeof(save)/4; i++){
    if(save[i] > result){
      result = save[i];
      index = i + 1;
    }
  }
  printf("%d\n%d\n", result, index);
  return 0;
}