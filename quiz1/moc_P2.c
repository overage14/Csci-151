//printf("%i days, %i hours, %i minutes, %i seconds");
#include <stdio.h>
#include <stdlib.h>

int main() {
	int ts, s, m, h, d;
	scanf("%i", &ts);
	s=ts%60;
	m=ts/60%60;
	h=ts/3600%24;
	d=ts/(3600*24);
	printf("%i days, %i hours, %i minutes, %i seconds", d, h, m, s);
    return 0;
}
