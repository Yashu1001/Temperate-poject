#include<stdio.h>
main(){
	int a,b,c;
	printf("Enter Table=");
	scanf("%i",&a);
	for(b=1;b<=10;b++){
		c=a*b;	
		printf("%i*%i=%i\n",a,b,c);	
	}
		
}
