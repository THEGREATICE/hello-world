# include<stdio.h> 
int main()
{
  double a,b,c,d,e,f,x,y;
  printf("������a,b,c,d,e,f��ֵ\n");
  scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
  x=(e*d-b*f)/(a*d-b*c);
  y=(e*c-a*f)/(b*c-a*d);
  printf("x��ֵΪ%lf, y��ֵΪ%lf\n",x,y);
}
