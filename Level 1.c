#include<stdio.h> //library name corrected
void main() //no return type hence void
{	int a,b,c,mx,mi; //expected output integers
	scanf("%d %d %d",&a,&b,&c); //formatted to int
	printf("\t%d\t%d\t%d",a,b,c);
	if(a>b)
	{
		if(a>c)
		{
			mx=a;
			if(b>c)	
				mi=c;
			else 
				mi=b;
		}
	}
	else if(b>c)
    	{
		if(b>a) 
		{
			mx=b;
            	if(a>c) 
				mi=c;
			else
			    mi=a;
		}
	}
	else
	{
		mx=c;
		if(a>b) 
			mi=b;
		else 
			mi=a;
	}
	printf("Largest is %d and smallest is %d",mx,mi); //printed reversed max and min
}
