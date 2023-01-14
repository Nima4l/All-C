// by nima khabazzadeh

#include <stdio.h>

int main()
{
    //arrys 
    int a[20];
    int z, j, i;
    //get numbers from user
    for (i = 0; i < 21; i++)
    {
        printf("Enter %i:", i);
        scanf("%i", &a[i]);
    }
    printf("++++++++++++++++++++++++++\n");
    //checked numbers for user
    for (j = 0; j < 21; j++)
    {
        //check to prime numbers
        for (z = 2; z < a[j]; z++)
        {
            //if not prime print number
            if (a[j] % z == 0)
            {
                printf("%i\n", a[j]);
                break;
            }
        }
        //if prime or 1 print -1
        if (a[j] == z || a[j] == 1)
        {
            printf("-1\n");
        }
    }
}
