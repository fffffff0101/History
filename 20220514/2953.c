#include <stdio.h>

int main() {
  int list[5][4];
  for(int i = 0; i < 5; i++){
    scanf("%d %d %d %d", &list[i][0], &list[i][1]
                       , &list[i][2], &list[i][3]);
  }
  int best = 0;
  int score = 0;
  for(int i = 0; i < 5; i++){
    int now_score = 0;
    for(int j = 0; j < 4; j++){
      now_score += list[i][j];
    }
    if(score < now_score){
      best = i + 1;
      score = now_score;
    }
  }
  printf("%d %d", best, score);
  return 0;
}