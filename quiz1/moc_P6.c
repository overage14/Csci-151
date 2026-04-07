#include <stdio.h>

int main(){
    size_t n,res=0,m=1;
    scanf("%zu",&n);
    int last=n%10;
    while(n!=0){
        last=n%10;
        res+=last*last*m;
        if(last<4){
            m*=10;
        }else{
            m*=100;
        }
        n/=10;
    }
    printf("%zu", res);
    
    return 0;
}
