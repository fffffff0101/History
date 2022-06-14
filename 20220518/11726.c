#include <stdio.h>

int main() {
  int a[1001] = {1, 1, 2};
  for(int i = 3; i < 1001; i++){
    a[i] = a[i - 1] + a[i - 2];
    a[i] %= 10007;
  }
  int n;
  scanf("%d", &n);
  printf("%d", a[n]);
  return 0;
}