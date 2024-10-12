#include<stdio.h>

int main(void) {

    printf("--Multipli di n e compresi tra a e b-- \n");

    int i;
    int n;
    int a;
    int b;


    printf("N: ");
    scanf("%d", &n);
    printf("a: ");
    scanf("%d", &a);
    printf("b: ");
    scanf("%d", &b);

    while(i = a, i<=b) {

        printf("%d\n", n*i);
        i++;

    }

    return 0;
}