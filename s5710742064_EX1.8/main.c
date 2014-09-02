#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h;
    int w;
    int a;

    printf("High! ");
    scanf("%d",&h);
    printf("wide! ");
    scanf("%d",&w);

    a = h*w/2 ;
    printf("sum = %d\n",a);

    return (0);
}
