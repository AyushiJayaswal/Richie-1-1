#include <stdio.h>

int main()
{int t;
float fahr;
char a[40]="C";
char b[40]="F";
    printf("%4s%8s\n",a, b);
    for(t=300;t>=0;t-=20)
    {
        printf("%4d\t",t);
        fahr=(9.00/5.00)*t+32.00;

        printf("%8.2f\n",fahr);

    }


    return 0;
}
