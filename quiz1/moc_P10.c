#include <stdio.h>
int main () {
    char ch, ch2='$';
    int a=0;
    do {
        ch = getchar();
        if (ch==ch2){
            a++;
        }
        ch2 = ch;
        
    } while (ch != '\n');
    if (a){
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}
