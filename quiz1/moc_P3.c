#include <stdio.h>

//count words
//count num of lines
//find the length of the longest word

int main(){
    // do not change this part
    char filename[12];
    scanf("%s", filename);
    // your code starts here
    // open the file and start reading it
    FILE *file=fopen(filename, "r");
    int l=1, w=1, lw, c=0;
    char ch;
    while (!feof(file)){
        fscanf(file, "%c", &ch);
        if(ch=='\n'){
            l+=1;
            w+=1;
        } else if (ch==' '){
            w+=1;
        }
        if((ch<=90 && ch>=65)||(ch<=122&&ch>=97)){
            c+=1;
        }else{
            lw=(lw<c) ? c : lw;
            c=0;
        }
    }
    
    printf("Total lines: %i\n", l);
    printf("Total words: %i\n", w);
    printf("Longest word: %i", lw);
    fclose(file);
    // close the file
    return 0;
}
