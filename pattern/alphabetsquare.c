#include <stdio.h>
int main()
{
    printf("Navedul  590011772\n");
    int n;
    printf("Enter the number of rows of the square\n");
    scanf("%d", &n);
    for ( int i = 1; i<=n; i++)
    {
        int a=1;
        for ( int j=1; j<=n; j++)
        {
            int d=a+64;
            char c= (char)d;
            printf("%c",c);
            a++;
        }
        printf("\n");
    }
    return 0;
}