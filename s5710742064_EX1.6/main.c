#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    printf("please enter number\n");
    scanf("%d %d %d",&a, &b, &c);
    d = a+b+c;
    e = d/3;
    printf("mean = %d\n",e);
    return 0;
}
