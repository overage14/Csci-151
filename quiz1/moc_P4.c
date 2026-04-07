#include <stdio.h>
#include <stdlib.h>
int main() {
	int a, b, c, d;
	scanf("%i", &b);
	scanf("%i", &a);
	c=a/b;
	d=a%b;
	printf("You can afford %i coconuts and the change will be %itg.", c, d);
    return 0;
}
