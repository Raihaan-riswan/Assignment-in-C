//This is Question NO:07

#include <stdio.h>
int main(){
    int i, j, k ,rows;
    printf("Enter rows :");
    scanf("%d",&rows);

    for(i=1; i<=rows; i++){
        for(j=1; j<= rows - i; j++){
            printf(" ");
        }
        int num = i;
        for(k=1; k <= i; k++){
            printf("%d",num);
            num++;
        }
        num -= 2;
        for(k = 1;k < i;k++){
            printf("%d",num);
            num--;
        }
        printf("\n");
    }
    return 0;
}