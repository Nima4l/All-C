//by NimaKhabbazzadeh

#include <stdio.h>

int main()
{
    //make array name a
    int a[]={0,0,0,0};
    
    //get arrays
    printf("Enter Number1:");
    scanf("%i",&a[0]);
    printf("Enter Number2:");
    scanf("%i",&a[1]);
    printf("Enter Number3:");
    scanf("%i",&a[2]);
    printf("Enter Number4:");
    scanf("%i",&a[3]);
    
    //make number with for
    for(int i = 0;i<4;i++)
    {
        for(int j = 0;j<4;j++)
        {
            for(int k = 0;k<4;k++)
            {
                for(int h = 0;h<4;h++)
                {
                    //make number with 4 length 
                    int sum =a[i]*1000+a[j]*100+a[k]*10+a[h];
                    
                    //if numbers have duplicate don't print it or not print numbers
                    if(a[i]==a[j] && a[k]==a[h]&&a[j]==a[k])
                    {
                        printf("");
                    }
                    else
                    {
                        printf("%i\n",sum);
                    }
                }
            }
        }
    }
}