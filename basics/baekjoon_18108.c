#include <stdio.h>

int main(){
    int year;

    scanf("%d", &year);
    if(1000 <= year && year <=3000){
        printf("%d", year-543);
    }

    return 0;
}