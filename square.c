#include<stdio.h>
it square(int x);
int main()
{ int n,s;
printf("enter the number");
scanf("%d",&n);
s=square(n);
printf("square of %d =%d",n,s);
return 0;
}
int square(int x)
{
    int z=0;
    z=x*x;
    return z;
}
