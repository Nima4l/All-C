/******************************************************************************

							Online C Compiler.
				Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

int main()
{
	double inVal = 0;
	printf(" Please enter your digit : ");
	scanf("%le", &inVal);
	int intPart = floor(inVal);
	
	
	//گرفتن تعداد اعداد اینت
    int i;
	for (i = 1; intPart >= 10; i++)
	{
		intPart = (intPart / 10);
	}
	
	//در اوردن اعداد اعشار
	while (inVal - floor(inVal) != 0)
	{
		inVal *= 10;
	}
	float inVal2= inVal;
	
	//گرفتن تعداد اعداد اعشار
	int j;
	for (j = 1; inVal >= 10; j++)
	{
		inVal = (inVal / 10);
	}
	int a = inVal2;
    int sum = 0;
	int b = 0;
	for (int z = (j - 1); z >= 0; z--)
	{
		b = a % 10;
		sum += (b * pow(10, z));
		a = (a / 10);
	} 
	double outVal = sum;
    outVal *= pow(10, (-i));
    float digit=outVal;
	printf(" \n inveresed digit is : %f", digit);
}
