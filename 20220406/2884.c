#include <stdio.h>

int main() {
  int hour, minute;
  scanf("%d %d", &hour, &minute);
  int integer_time = hour * 60 + minute;
  integer_time -= 45;
  if(integer_time < 0){
    integer_time += 1440;
  }
  printf("%d %d", integer_time/60, integer_time%60);
  return 0;
}