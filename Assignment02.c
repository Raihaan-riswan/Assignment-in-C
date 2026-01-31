//This is Question NO:02

#include <stdio.h>
int main(){
    int i, j,rows;
    char lt = 'A';
    printf("Enter rows");
    scanf("%d",&rows);
    for (i=1; i<=rows; i++){
        for (j=1; j<=i; j++){
        printf("%c",lt);
    }
    printf("\n");
    lt++;
    }
    return 0 ;

}