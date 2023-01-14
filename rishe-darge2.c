

#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%i",&a);
    printf("a:%i",a);
    scanf("%i",&b);
    printf("b:%i",b);
    scanf("%i",&c);
    printf("c:%i",c);
    
    int delta = (b*b) - 4*a*c; 
    if(delta == 0)
    {
        int x1= -b/(2*a);
        printf("\nx:%i",x1);
    }
    if(delta < 0)
    {
        printf("\nnot exit");
    }
    if(delta > 0)
    {
        
        int x1= (-b+sqrt(delta))/(2*a);
        int x2= (-b-sqrt(delta))/(2*a);
        printf("\nx1: %i , x2: %i",x1,x2);
    }
}
//by mahan roshan