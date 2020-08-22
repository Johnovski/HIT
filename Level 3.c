#include <stdlib.h>
#include <stdio.h> //added
int main()
{
	int a[20],ap,min,max; //size 20
	printf("enter the number of elements in array:-"); //print
	scanf("%d",&ap); //read
	int i; //loop var
	for(i=0;i<ap;i++) //<
	{
		scanf("%d",&a[i]); //%d
 	}
	for(i=0;i<ap;i++) //<
                printf("%d\n",a[i]);
	min=a[0];
	for(int i=0;i<ap;i++) //++
	{
		if(a[i]<=max)
			max=a[i];
		if(a[i]>min)
			min=a[i];
	}
	printf("Min=%d and Max=%d",max,min);
	return 0;
}
