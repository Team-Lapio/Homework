#include<stdio.h>
int n;
int h(int x, int y){
	int min =x ;
	min = min>n-1-x ? n-1-x: min;
	min = min>n-1-y ? n-1-y: min;
    min = min>y ? y: min;
	return min;
	}

int main()
{
	int m,x=0,y=0,s=0,k=0,g=0;
	scanf("%d %d",&n);
	for(y=0;y<n;y++)
	{
		for(x=0;x<n;x++)
		{
			k=h(y,x);
		   	if(x>=y)
		   	{
		   		g=x+y-k*2;
		   		printf("%3d ",g);
			   }
		   	else{
		   			g = (n-1-(k*2))*4-(x+y-(k*2));
		   			printf("%3d ",g);
			   }
		   }
		   printf("\n");
	}
	return 0;
}
