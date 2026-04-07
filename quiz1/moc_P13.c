// 1) allowed libraries: <stdio.h>
// 2) allowed functions: printf, scanf
// 3) allowed language elements: loops, nested loops, arithmetic and bitwise operators, if statements
// 4) If you use anything not mentioned in points 1,2,3 - your code won't be accepted.
#include <stdio.h>
int main(){
    size_t n;
    scanf("%zu",&n);
    for(int i=0;i<10;i++){
        while(n!=0){
            if((n%10==(n/10)%10)&&(n%10==(n/100)%10)){
                printf("YES,%zu",n%10);
                return 0;
            }
            n/=10;
        }
    }
    printf("NO");
    return 0;
}
