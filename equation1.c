#include <stdio.h>
#include <math.h>

void m(float a, float b, float c)
{
  double x1,x2;
  x1=(-b+sqrt(b*b-4*a*c))/(2*a);
  x2=(-b-sqrt(b*b-4*a*c))/(2*a);
  printf("���̵ĸ���%.2lf��%.2lf",x1,x2);
}
void n(float a, float b, float c)
{
  double x;
  x=(-b)/(2*a);
  printf("���̵ĸ�Ϊ%.2lf",x);
}
void f(float a, float b, float c)
{
  printf("������ʵ����\n");
}

main()
{
  float a,b,c;
  printf("������a,b,c��ֵ\n");
  scanf("%f%f%f",&a,&b,&c);
  if(b*b-4*a*c>0)
  m(a,b,c);
  if(b*b-4*a*c==0)
  n(a,b,c);
  if(b*b-4*a*c<0)
  f(a,b,c);
}
