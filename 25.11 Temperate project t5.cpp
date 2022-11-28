#include<stdio.h>
main(){
	int a=1,b,c;
	printf("ENTER VALUE=");
	scanf("%i",&c);
	for(b=1;b<=c;b++){
		a=a*b;		
	}
	printf("%i\n",a);	
}
