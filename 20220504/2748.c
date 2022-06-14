#include <stdio.h>

int main(){
  long long int array[91] = {0, 1,};  
  for(int i = 0, j = 1, k = 2; k <= 90; i++, j++, k++){
    array[k] = array[i] + array[j];
  }
  int target;
  scanf("%d", &target);
  printf("%lld\n", array[target]);
  return 0;
}
