#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,d1,d2;
    scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    d1=(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
    d2=sqrt(d1);
    printf("%.4f",d2);
}