#include<stdio.h>
/*int fact(int);
int fact(int z)
{
	int i, factorial=1;
	for(i=1;i<z;i++)
	factorial*=i;
	return 0;
}*/
int main()
{
	int i,j,x[10],y[10],d1[10],d2[10],d3[10],d4[10],a[10][10],h;
	float val,u,p,m;
	printf("enter the values of x");
	for(i=0;i<5;i++)
	scanf("%d",&x[i]);
	h=x[1]-x[0];
	printf("Enter the values of y(=f(x))");
	for(i=0;i<5;i++)
	scanf("%d",&y[i]);
	printf("Enter the value of x for y to be found");
	scanf("%f",&val);
	m=val;
	printf("x\ty\tdyi\td2yi\td3yi\td4yi\n");
	for(i=0;i<5;i++)
	{
		a[i][0]=x[i];
		a[i][1]=y[i];
	}
	/*for(i=0;i<4;i++)
	{
		if((y[i+1]<=y[4])&&(y[i+1]>=y[0]))
		d1[i]=y[i+1]-y[i];
		else break;
	}
	for(i=0;i<3;i++)
	{
		if(d1[i+1]<=d1[3]&&(d[i+1]>=d1[0]))
		d2[i]=d1[i+1]-d1[i];
		else break;
	}
	for(i=0;i<2;i++)
	{
		if(d2[i+1]<=d2[2]&&(d2[i+1]>=d2[0]))
		d3[i]=d2[i+1]-d2[i];
		else break;
	}
	for(i=0;i<1;i++)
	{
		if(d3[i+1]<=d3[1]&&(d3[i+1]>=d3[0]))
		d4[i]=d3[i+1]-d3[i];
		else break;
	}*/
	for(j=2;j<6;j++)
	{
		for(i=0;i<5;i++)
		{
			if((a[i+1][j-1]>y[0])&&(a[i+1][j-1]<=y[4]))
			a[i][j]=a[i+1][j-1]-a[i][j-1];
			else
			break;
		}
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<6;j++)
		printf("%d\t",a[i][j]);
		printf("\n");
	}
}
	
	
	













































	


