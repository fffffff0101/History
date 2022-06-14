#include <stdio.h>

int main(){
    int test_case;
    scanf("%d", &test_case);
    for(int i = 0; i < test_case; i++){
        int total;
        scanf("%d", &total);
        
        int score[1000] = {0};
        int sum = 0;
        
        for(int j = 0; j < total; j++){
            int input;
            scanf("%d", &input);
            sum = sum + input;
            score[j] = input;
        }
        
        // 평균
        double avg = (double)sum/total;
        
        // 평균보다 높은 수의 개수
        int higher = 0;
        for(int j = 0; j < total; j++){
            if(score[j] > (int)avg){
                higher = higher + 1;
            }
        }
        printf("%.3f%%\n", (double)(higher*100)/total);
    }
    return 0;
}