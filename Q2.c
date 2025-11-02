#include <stdio.h>
int main() {
    int x, y, hcf, i, min;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);
    if (x < 0) x = -x;
    if (y < 0) y = -y;
    if (x < y)
        min = x;
    else
        min = y;
    for (i = 1; i <= min; i++) {
        if (x % i == 0 && y % i == 0)
            hcf = i;
    }
    printf("HCF of %d and %d is %d\n", x, y, hcf);
    return 0;
}
