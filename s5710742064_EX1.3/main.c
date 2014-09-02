#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int b;
    int c;
    int d;

    scanf("%d %d",&a, &b);
    c = a*b;
    d = a/b;

    printf("a*b = %d\n",c);
    printf("a/b = %d\n",d);


    return 0;
}
