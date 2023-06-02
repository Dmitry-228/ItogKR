#include<stdio.h>

int main(){
    int count = 0;
    int prev, curr;
    scanf("%d\n", &prev);
    while (prev != 0){
    scanf("%d\n", &curr);
    if (curr == 0){
        break;
    }
    else if(curr > prev * 2){
        count++;
    }
    prev = curr;
    }
    printf("%d\n", count);
    return 0;
}