// bisection method
#include<stdio.h>
#include<math.h>
#define f(x)  x*x*x-4*x +1
#define e 0.001 
int main()
{
	int i;
	float a,b,c;
	float f0,f1,f2;
	printf("enter the value of  a and b: ");
	scanf("%f%f",&a,&b);
	do{
	
	c=(a+b)/2;
	
	f0=f(a);
	
	f1=f(b);
	
	f2=f(c);
	
	if(f0*f2<0)
	{ 
	b=c;
	}
	else
	{
		a=c;
	}
	i++;
	printf("no of iterations = %d",i);
	printf("root=%f",c);
	printf("value of funtion %f \n",f2);
}
while (fabs(f2)>e);
}
