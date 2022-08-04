#include <stdio.h>
#include <string.h>

int main(){
    char input[] = "";

    scanf("%s", input);
    strlwr(input);
    strcat(input, "\?\?!");

    printf(input);

    return 0;
}