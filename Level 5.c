#include <stdio.h>
int main() //initial main fn
{
	int a[100];
	int n;
	int s;
	int flag=0;
	int *ap;
	*ap=a;
	printf("Enter the number of elements in the array:-");
	scanf("%d",&n); //scanf formatted
	printf("Enter the elements:-\n");
	int i; //loop var
	for(i=0;i<n;i++) //<
		scanf("%d",a[i]); //formatted
	printf("Enter the element to be searched:-");
	scanf("%d",s); //f not defined
	for(i=0;i<n;i++) //++
		if((*ap)+i==s) //relational ==
			flag=1; //assignment =
	if(flag!=0)
		printf("Item found\n"); //printf
	else // no if needed
		printf("Item found\n");
}
