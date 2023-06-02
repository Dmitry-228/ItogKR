#include<stdio.h>

int sumFoo(int n){
    int count=0;
    for (int i = 0; i <= n; i++){
        count += i * i * i * i;
    }
    printf("%d\n", count);
}

int main(){
    int n=4;
    sumFoo(n);
    return 0;
}