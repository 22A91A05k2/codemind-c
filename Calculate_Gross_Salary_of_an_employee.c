#include<stdio.h>
int main()
{
  float s,hra,da,pf,gf;
  scanf("%f%f%f",&s,&hra,&da);
  pf=(s*12)/100;
  gf=s+hra+da+pf;
  printf("%0.2f
",pf);
  printf("%0.2f
",gf);
}