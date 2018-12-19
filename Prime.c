#include<stdio.h>
#include<math.h>
int sum_bit(int num)
{
  int i,a[100],d,sum;
  int n = 1;
  d = num;              
  while(d>=10)
    {
      n++;
      d=d/10;
     } 
  sum = 0;
  for(i=0;i<n;i++)
     {
     	a[i] = num%10;
     	num = num/10;
     	sum = sum + a[i];
	 }
  return sum;
}

int multi_bit(int num)
{
  int i,a[100],d,sum1;
  int n = 1;
  d = num;              
  while(d>=10)
    {
      n++;
      d=d/10;
     } 
  sum1 = 1;
  for(i=0;i<n;i++)
     {
     	a[i] = num%10;
     	num = num/10;
     	sum1 = sum1 * a[i];
	 }
  return sum1;
}

int square_sum_bit(int num) {
  int i,a[100],d,sum2;
  int n = 1;
  d = num;              
  while(d>=10)
    {
      n++;
      d=d/10;
     } 
  sum2 = 0;
  for(i=0;i<n;i++)
     {
     	a[i] = num%10;
     	num = num/10;
     	sum2 = sum2+a[i]*a[i];
	 }
  return sum2;
}

int isprime(int num) 
{
int i,k;
k=sqrt(num);
for(i=2;i<=k;i++)
if(num%i==0)break;
if(i>k)
return 0;
else
return 1;
}

int main() {
  int num;
  for(num=100;num<=999;num++)
  {
  if(isprime(num)==0&&isprime(sum_bit(num))==0&&isprime(multi_bit(num))==0&&isprime(square_sum_bit(num))==0)
  printf("%dÊÇ³¬¼¶ËØÊý\n",num);
  }
}
