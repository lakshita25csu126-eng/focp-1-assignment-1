#include <stdio.h>
int main() {
    int n, i, j,num;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0)
            num = 1;
        else
            num = 0;
        for (j = 1; j <= i; j++) {
            printf("%d", num);
            num = 1 - num; 
        }
        printf("\n");
    }
    return 0;
}
