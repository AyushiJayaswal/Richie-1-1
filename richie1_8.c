#include <stdio.h>
#include <stdlib.h>
int main()
{   int c;
    int l=0, blank=0,tab=0 ;
    while((c=getchar())!=EOF)
    {
    if(c=='\n')
        l++;
    if(c=='\t')
        tab++;
    if(c==' ')
        blank++;
    }
    printf("lines=%d\ntabs=%d\nblanks=%d",l,tab,blank);
    return 0;
}
