#include <stdio.h>
#include <limits.h>
size_t squareDigitRecursive( size_t n){
    if(n<10) return n*n;
    int last = n%10;
    if(last<4){
        return squareDigitRecursive(n/10)*10+last*last;
    }else {
        return squareDigitRecursive(n/10)*100+last*last;
    }
}

int main(){
    size_t a;
    scanf("%zu",&a);
    printf("%zu", squareDigitRecursive(a));
    
    return 0;
}
