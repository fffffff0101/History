#include <stdio.h>

int main(){
    int index[26] = {0};
    for(int i = 0; i < 26; i++){
        index[i] = -1;
    }
    char string[101] = {0};
    scanf("%s", &string);
    int check = 0;
    for(; string[check] != 0; check++){
        if(index[string[check] - 97] == -1){
            index[string[check] - 97] = check;
        }
    }
    for(int i = 0; i < 26; i++){
        printf("%d ", index[i]);
    }
    return 0;
}