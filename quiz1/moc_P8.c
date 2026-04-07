#include <stdio.h>


int main(){
    // do not change this part
    char filename[24];
    scanf("%s", filename);
    FILE *file=fopen(filename,"r");
    
    // your code starts here, after this comment
    // open the file and start reading it
    int a,b,c,d,e;
    fscanf(file,"%i,%i,%i,%i,%i",&a,&b,&c,&d,&e);
    int max=a,min=a;
    if (max<b) max=b;
    if (max<c) max=c;
    if (max<d) max=d;
    if (max<e) max=e;
    if (min>b) min=b;
    if (min>c) min=c;
    if (min>d) min=d;
    if (min>e) min=e;
    printf("max+min=%i",max+min);
    /* the output is provided, fix it by adding the output data you calculated
    printf("max+min=%i");
    */
    // close the file
    fclose(file);
    return 0;
}
