//THIRD VARIABLE
#include <stdio.h>
int main() {
    int a, b, temp;  
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping: a = %d, b = %d", a, b);
    return 0; 
}
