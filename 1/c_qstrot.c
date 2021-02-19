#include <stdio.h>
 
int intcomp(int *x, int *y)
{ return *x - *y; }

//int a[10000000];
int a[10] = {1, 2, 3, 4 , 5 , 10, 9 , 8 ,7 ,6};
int main(void)
{
    int i ,n = 10;
    //while ( scanf("%d", &a[n]) != EOF )
    //    n++;
    qsort(a, n, sizeof(int), intcomp);
    for (i = 0; i < n; i++)
        printf("%d\n", a[i]);

    return 0;
}