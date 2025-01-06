#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad   590011772\n");
    int n;
    printf("Enter the number of lines of the bridge = ");
    scanf("%d", &n);
    int mid = n-1;
    int spaces = 1;
    int a = 1;

    for ( int i = 1; i<=2*n-1; i++ )
    {
        printf("%d", i);
    }
    printf("\n");

    for ( int i = 1; i<=n; i++ )
    {
        for ( int j = 1; j<=mid; j++ )
        {
            printf("%d", a);
            a++;
        }

        for ( int k = 1; k<=spaces; k++ )
        {
            printf(" ");
            a++;
        }

        for ( int j = 1; j<=mid; j++ )
        {
            printf("%d", a);
            a++;
        }
        mid--;
        spaces+=2;
        a = 1;
        printf("\n");

    }
    return 0;
}