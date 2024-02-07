//horners method

#include<stdio.h>
#include<math.h>

int main()
{
int h,x,res,z;
int arr[h];
	
printf("enter the value of x: ");
scanf("%d",&x);
printf("enter the highest value of the equation: ");
scanf("%d",&h);
for(int i=0; i<=h; i++)
{
printf("enter the co-efficients: ");
scanf("%d",&arr[i]);
}

// initial multiplication 
for(int i=0; i<1; i++)
{
res = x*arr[i];

}	

// main calculation
for(int i=1; i<=h ; i++)
{
res += arr[i];
res*=x;
printf("\n the value of res here is %d",res);
}
	printf("\n the final result is :%d",res/x);
}

