#include <stdio.h>

int main() {
  int a[10], b[10];
  for(int i = 0; i < 10; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < 10; i++){
    scanf("%d", &b[i]);
  }
  
  for(int i = 0; i < 10; i++){
    for(int j = i + 1; j < 10; j++){
      if(a[i] > a[j]){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
      if(b[i] > b[j]){
        int temp = b[i];
        b[i] = b[j];
        b[j] = temp;
      }
    }
  }
  
  printf("%d %d\n", a[7] + a[8] + a[9], b[7] + b[8] + b[9]);
  return 0;
}
