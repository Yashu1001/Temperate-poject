#include<stdio.h>
main(){
	int count=0,n;
	printf("ENTER VALUE=");
	scanf("%lli",&n);
	do{
	    n/=10;
		count++;		
	}while(n!=0);
	printf("TOTAL DIGIT:-%i",count);
}
