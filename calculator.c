#include <stdio.h>

int main()
{
    float a,b;
    unsigned int c;
    
    printf("enter first number:");
    scanf("%f",&a);
    printf("enter the second number");
    scanf("%f",&b);
    printf("what do you wish to do ?\n1)addition\n2)subtraction\n3)multiplication\n4)devision\n");
    scanf("%d",&c);
    switch(c)
    {
    case(1):
    printf("your answer is:%f",a+b);
    break;
    case (2):
    printf("your answer is:%f",a-b);
    break;
    case (3):
    printf("your answer is:%f",a*b);
    break;
    case (4):
    printf("your answer is:%f",a/b);
    break;
    default:
    printf("you've entered and invalid number, try entering number 1,2,3 or 4");
    break;
    }
    return 0;
}

