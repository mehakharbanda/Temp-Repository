#include <stdio.h>
int main() {
    int x,y;
    printf("enter two integers: ");
    scanf("%d %d",&x,&y);
    printf("before swapping first variable=%d\nsecond variable=%d\n",x,y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("after swapping first variable=%d\nseconf variable=%d",x,y);
    return 0;
}
