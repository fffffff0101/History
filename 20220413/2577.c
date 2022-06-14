#include <stdio.h>

int main()
{
    int input_num = 0;
    int sum = 1;
    int x[10] = {0};
    
    for(int i = 0; i < 3; i++){
        scanf("%d", &input_num);
        sum *= input_num;
    }
    
    while (sum != 0){
        int check = sum % 10;
        sum /= 10;
        x[check] += 1;
    }
    
    for(int i = 0; i < 10; i++){
        printf("%d\n", x[i]);
    }
    return 0;
}