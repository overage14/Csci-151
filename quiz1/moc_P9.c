#include <stdio.h>
#include <stdlib.h>
int main() {
	int n;
	scanf("%i", &n);
	int d1,d2;
	d1=n%10;
	n/=10;
	while(n!=0){
	    d2=d1;
	    d1=n%10;
	    if(d2>=d1){
	        printf("NO");
	        return 0;
	    }
	    n/=10;
	}
	printf("YES");
    return 0;
}
