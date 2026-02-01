// Assignment number 09
#include <stdio.h>

int main() {
    int main(){
    int rows;
    printf("Enter rows :");
    scanf("%d",&rows);
      

    for (int i = 0; i < rows; i++) {

        
        for (int s = 0; s < rows - i - 1; s++) {
            printf("  ");
        }

        int num = 1;
        for (int j = 0; j <= i; j++) {
            printf("%4d", num);
            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
