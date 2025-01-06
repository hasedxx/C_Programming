#include <stdio.h>
int main()
{
    printf("Navedul Hasan Ahmad  590011772\n");
    int n;
    printf("Enter the number of rows = ");
    scanf("%d",&n);
    int str = n;

    for ( int i = 1; i<=n; i++ )
    {
        for ( int j = 1; j<= str; j++ )
        {
            printf("*");
        }
        str--;
        printf("\n");
    }
    return 0;
}