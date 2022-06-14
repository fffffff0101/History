#include <stdio.h>

int main() {
  int a[5] = {0};
  int T;
  scanf("%d", &T);
  int count = 0;
  while(count < T){
    for(int i = 0; i < 5; i++){
      scanf("%d", &a[i]);
    }
    for(int i = 0; i < 5; i++){
      for(int j = i + 1; j < 5; j++){
        if(a[i] > a[j]){
          int temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
      }
    }
    if(a[3] - a[1] >= 4){
      printf("KIN\n");
    }
    else{
      printf("%d\n", a[1] + a[2] + a[3]);
    }
    count++;
  }
  return 0;
}