
#include<stdio.h> 
int main() 
{
   int a;
   scanf("%d",&a);
   if(a%4==0&&a%100!=0||a%400==0)
   printf("%d是闰年\n",a);
   else
   printf("%d不是闰年\n",a);
   return 0;
}
