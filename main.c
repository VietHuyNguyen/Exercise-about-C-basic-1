#include <stdio.h>
#include <stdlib.h>

void TimMax(int a,int b,int c,int d,int e);
void TimMin(int a,int b,int c,int d,int e);
void TBC(int a,int b,int c,int d,int e);
int main()
{
    int a,b,c,d,e;
    printf("Nhap 5 so nguyen abcde\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    TimMax(a,b,c,d,e);
    TimMin(a,b,c,d,e);
    TBC(a,b,c,d,e);

    return 0;
}
void TimMax(int a,int b,int c,int d,int e)
{
    int max=a;
    if(b>a)
        max=b;
    if(c>max)
        max=c;
    if(d>max)
        max=d;
    if(e>max)
        max=e;
    printf("Max=%d  ", max);
}
void TimMin(int a,int b,int c,int d,int e)
{
    int min=a;
    if(b<a)
        min=b;
    if(c<min)
        min=c;
    if(d<min)
        min=d;
    if(e<min)
        min=e;
    printf("Min=%d\n", min);
}
void TBC(int a,int b,int c,int d,int e)
{
    float A=(float)(a+b+c+d+e)/5;
    printf("TBC=%f", A);
}
