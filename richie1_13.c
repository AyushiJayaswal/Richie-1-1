#include <stdio.h>
#include <stdlib.h>
int main ()
{
int c;
  int nw=0;
  while((c=getchar())!=EOF)
    {
      if(c==' '||c=='\n'||c=='\t')
        nw++;
    }
  printf("no. of words=%d",nw);
  return 0;
}
