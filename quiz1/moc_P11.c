// 1) allowed libraries: <stdio.h>
// 2) allowed functions: printf, scanf, putchar, getchar
// 3) allowed language elements: loops, nested loops, arithmetic and bitwise operators
// 4) If you use anything not mentioned in points 1,2,3 - your code won't be accepted.
#include <stdio.h>  
int main() {
    char a=' ';
    char b='*';
    int x;
    scanf("%i", &x);
    int n,m,k,l;
    for (n = 1, m = 1;n <= (x+1)/2 ;n++, m=m+2){
        for (k=1; k <= (x-m)/2; k++){
            printf("%c", a);
        } 	    
        for (l=1; l <= m; l++){
            printf("%c", b);
        }
        for (k=1; k <= (x-m)/2; k++){
            printf("%c", a);
        }
        printf("\n");
    }
    for (n = 1, m = x-2;n <= (x-1)/2 ;n++, m=m-2){
        for (k=(x-m)/2; k >= 1; k--){
            printf("%c", a);
        }
        for (l=m; l >= 1; l--){
            printf("%c", b);
        }
        for (k=(x-m)/2; k >= 1; k--){
            printf("%c", a);
        }
        printf("\n");
        }
    return 0;
}
