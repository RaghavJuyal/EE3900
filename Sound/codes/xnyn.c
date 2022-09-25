#include<stdio.h>
#include<math.h>

int main()
{
	FILE *fp1 = NULL;
	FILE *fp2 = NULL;
	fp1 = fopen("plotx.dat","w");
	fp2 = fopen("ploty.dat","w");
	float x[] = {1.0,2.0,3.0,4.0,2.0,1.0};
	float y[20];
	y[0] = x[0];
	y[1] = -0.5*y[0]+x[1];
	for(int i=2;i<20;i++)
	{
		if(i<6)
		{
			y[i] = -0.5*y[i-1]+x[i]+x[i-2];
		}
		else if(i>5 && i<8)
		{
			y[i] = -0.5*y[i-1]+x[i-2];
		}
		else
		{
			y[i] = -0.5*y[i-1];
		}
	}
	for(int i=0;i<6;i++)
	{
		fprintf(fp1,"%lf\n",x[i]);
	}
	
	for(int i=0;i<20;i++)
	{
		fprintf(fp2,"%lf\n",y[i]);
	}
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
