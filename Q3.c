#include <stdio.h>
int main() {
    int n1,n2,x1,x2;
    printf("enter first number:");
    scanf("%d",&n1);
    printf("enter second number:");
    scanf("%d",&n2);

    x1=n1;
    x2=n2;
    while(n2!=0){
        int brw=(~n1)&n2;
        n1=n1^n2;
        n2=brw<<1;
    }
    printf("subtraction of 2 numbers %d and %d is : %d",x1,x2,n1);
    return 0;
}
