#include <stdio.h>

int main(){
  int count[10001] = {0};
  int N = 0;
  scanf("%d", &N);

  for(int i = 0; i < N; i++){
    int input = 0;
    scanf("%d", &input);
    count[input] = count[input] + 1;
  }

  for(int i = 0; i < 10001; i++){
    if(count[i] > 0){
      for(int j = 0; j < count[i]; j++){
        printf("%d\n", i);
      }
    }
  }
  return 0;
}