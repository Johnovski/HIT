#include <stdio.h>
void main() //initial fn main
{
 	int a,b; //int input expected
 	scanf("%d %d",&a,&b); //formated a added
 	b=a%10;
	a=a/10;
 	while(a!=0)
 	{
  		b=b+10*(a%10);
  		a=a/10;
 	}
 	printf("%d",b); //formated
}
