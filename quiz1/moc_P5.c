#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, i, c;
	scanf("%i", &a);
	scanf("%i", &b);
	printf("%i", a);
	c=a;
	for(i=1; i<=b; i++){
	   while (c){
	       a+=c%10;
	       c/=10;
	   }
	   printf("_%i", a);
	   c=a;
	}
    return 0;
}
