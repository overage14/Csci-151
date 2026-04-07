#include <stdio.h>

//count words
//count num of lines
//find the length of the longest word

int main(){
    // do not change this part
    char filename[14];
    scanf("%s", filename);
    
    // your code starts here
    // open the file and start reading it
    FILE *file=fopen(filename, "r");
    int y;
    float a, v1, v2 , v3;
    while(!feof(file)){
        fscanf(file,"%d,%*[^-]-%f KZT", &y,&a);
        if(y==2010) v1=a;
        if(y==2024) v2=a;
    }
    v3=v2*100/v1;
    printf("v1=%g,v2=%g,v3=%.2f",v1,v2,v3);
    // close the file
    fclose(file);
    return 0;
}
