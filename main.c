/*
simple calculator
By grace
Feb 2022
MIT license
C89 compiler
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{

//variable declaration
int num1,num2,diff,product;
float quatient;
printf("simple calculator\n");
//capture inputs
 printf("enter two variables:");
 scanf("%d%d",&num1,&num2);
//computation
 sum= num1 + num2;
diff =num1-num3;
product=num1*num2;
quatient=(float)num1/num2;
//output
printf("%d+%d=%d",num1,num2,sum);
printf("%d-%d=%d",num1,num2,diff);
   printf("%d*%d=%d",num1,num2,product);
   printf("%d/%d=%d",num1,num2,quatient);

    return 0;
}
