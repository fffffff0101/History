#include <stdio.h>

int main() {
  int target, newnum;
  scanf("%d", &target);
  int copy = target;
  int count = 0;
  while ((target != newnum) || (count == 0)){
    newnum = (copy%10) * 10 + (copy/10 + copy%10) % 10;
    count++;
    copy = newnum;
  }
  printf("%d", count);
  return 0;
}