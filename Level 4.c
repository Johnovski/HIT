#include<stdio.h>
#include<string.h> //name changed
int main()
{
	int a[100],i; //i added
	char b; //b is char
	int c=0; // count var
	printf("Enter a string ");
    fgets(a,sizeof(a),stdin); //input string
	printf("Enter a character to count ");
    scanf("%c",&b); //formatted
	printf("%c\n",b);
	for(i=0;i<strlen(a);i++) //fn name changed
		if(a[i]==b)
			c++; //++
	printf("\nThe number of occurrences of %c is %d",b,c); //formatted
	return 0; //return int 
}
