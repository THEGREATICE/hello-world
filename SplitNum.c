#include<stdio.h>
int main()
{
	int N,k,i,j,n,c,d;
	int a[100],b[100]; 
	scanf("%d",&N);
	for(k=0;k<N;k++)
	{ 
    n=1; 
	scanf("%d",&c); 
	d=c;              
     while(d>=10)
    {
      n++;
      d=d/10;
     } 
     for(i=0;i<n;i++)
     {
     	a[i]=c%10;
     	c=c/10;
     	printf("%d ",a[i]);
	 }
	 return 0;
}
}
