#include<stdio.h>
int main(){
    int a=5;

    int *p;
    p = &a;

    printf("%d",a);

    printf("The pointer value of a=%d",*p);

    return 0;
}