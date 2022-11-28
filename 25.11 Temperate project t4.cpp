#include<stdio.h>
main(){
	int n,s=0,firstdigit,lastdigit;
	printf("ENTER NUMBER:-");
	scanf("%i",&n);
	lastdigit=n%10;
	firstdigit=n;
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	s=firstdigit+lastdigit;
	printf("sum to first and last digit:-%i",s);	
}
