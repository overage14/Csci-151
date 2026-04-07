// 1) allowed libraries: <stdio.h>
// 2) allowed functions: printf, scanf
// 3) allowed language elements: loops, nested loops, arithmetic and bitwise operators, if statements
// 4) If you use anything not mentioned in points 1,2,3 - your code won't be accepted.
#include <stdio.h>
int main(){
    size_t n,m;
    int d;
    scanf("%zu",&n);
    for(int i=0;i<10;i++){
        d=0;
        m=n;
        while(m!=0){
            if(m%10==i){
                d++;
            }
            m/=10;
        }
        if(d%2){
            printf("%d",i);
        }
        
    }
    return 0;
}
