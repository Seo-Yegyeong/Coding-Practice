#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, temp;
    int result=0;

    scanf("%d", &num1);
    scanf("%d", &num2);
    for(int i=0; i<3; i++){
        switch (i)
        {
        case 0:
            temp = num1 * (num2%10);
            break;
        case 1:
            temp = num1 * ((num2%100)/10);
            break;
        case 2:
            temp = num1 * (num2/100);
            break;
        }

        printf("%d\n", temp);
        result += floor(temp*pow(10, i));
    }
    printf("%d\n", result);

    return 0;
}