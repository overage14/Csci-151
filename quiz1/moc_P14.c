// 1) allowed libraries: <stdio.h>, <math.h>
// 2) allowed functions: printf, scanf and everything inside <math.h>
// 3) allowed language elements: loops, nested loops, arithmetic and bitwise operators, if statements
// 4) If you use anything not mentioned in points 1,2,3 - your code won't be accepted
#include <stdio.h>
int main(){
    size_t n;
    scanf("%zu",&n);
    int a=n%10;
    int b=n%10;
    while(n!=0){
        b=n%10;
        n/=10;
    }
    if(a==b){
        printf("YES,%d",a);
    }else{
        printf("NO,%d!=%d",b,a);
    }
    return 0;
}
