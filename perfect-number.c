/****************************Nima Khabazzadeh****************************/

#include <stdio.h>

int main()
{
    int n,x=0;
    printf("Enter number :");
    scanf("%i", &n);
    for(int i =1;i<n;i++)
    {
        if(n%i==0)
        {
            x+=i;
            
        }
    
    }
    if(x==n)
    {
        printf("It's perfect number");
    }
    else
    {
        printf("It's NOT perfect number");
    }
    

}
