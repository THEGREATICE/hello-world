# include<stdio.h> 
int main()
{
  double a,b,c,d,e,f,x,y;
  printf("请输入a,b,c,d,e,f的值\n");
  scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f);
  x=(e*d-b*f)/(a*d-b*c);
  y=(e*c-a*f)/(b*c-a*d);
  printf("x的值为%lf, y的值为%lf\n",x,y);
}
