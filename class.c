#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int b;
    float c , d, e;
    unsigned int a;
    printf("the different operations of this calculator include: \n1)mathematic operations\n2)temperature conversion\n3)distance conversion\n4)area and volume calculations\ntype what you wish to do :");
    scanf("%d",&a);
           if(a==1)
            {
                printf("please enter the first number:");
                scanf("%f",&c);
                printf("please enter the second number:");
                scanf("%f",&d);
                printf("what do you wish to do ?\n1)addition\n2)subtraction\n3)multiplication\n4)devision\n");
                scanf("%d",&b);
                if (b==1)
                printf("your answer is:%f",c+d);
                else if(b==2)
                 printf("your answer is:%f",c-d);
                else if(b==3)
                 printf("your answer is:%f",c*d);
                else if (b==4)
                 printf("your answer is:%f",c/d);
                else
                printf("you've entered an invalid value");


            }
            else if(a==2)
            {
                printf("please enter the temperature value:");
                scanf("%f",&c);
                printf("what do you wish to do ?\n1)celsius to fahrenhiet\n2)fahrenhiet to celsius\n");
                scanf("%d",&b);
                if(b==1)
                printf("your temperature value after conversion is:%f°f",(c*(9/5))+32);
                else if(b==2)
                 printf("your temperature value after conversion is:%f°c",(c+32)/1.8);
                 else
                printf("you've entered an invalid value");
        


            }
            else if(a==3)
            {
            printf("what do you wish to do ? \n 1) centermeter to meter \n2)meter to centemeter \n3)meter to kilometer \n4)kilometer to meter \n5)centemeter to kilometer \n6)kilometer to centemeter \n");
 scanf("%d",&b);
 if (b<=6&&b>=1)
 {
 printf("\nplease enter the distance value:");
 scanf("%f",&c);
 switch(b)
 {
     case (1):
     printf("\nyour answer after conversion is :%fm",c*0.01);
     break;
     case (2):
     printf("\nyour answer after conversion is :%fcm",c*100);
     break;
     case (3):
     printf("\nyour answer after conversion is :%fkm",c*0.001);
     break;
     case(4):
     printf("\nyour answer after conversion is :%fm",c*1000);
     break;
     case(5):
     printf("\nyour answer after conversion is :%fkm",c*0.00001);
     break;
     case(6):
     printf("\nyour answer after conversion is :%fcm",c*100000);
     break;
      }
 }
            else
            printf("invalid value entered ");
            }

            else if(a==4)
            {
                printf("what do you wish to find ?\n1)area of square \n2)area of rectangle \n3)area of circle \n4)volume of cuboid \n5)volume of cube \n6)volume of sphere\n");
                scanf("%d",&b);
                if (b==1)
                {
                    printf("please enter side:" );
                    scanf("%f",&c);
                    printf("area of rectangle is:%funit^2",c*c);
                }
                else if (b==2)
                {
                    printf("pleas enter breadth :");
                    scanf("%f",&c);
                    printf("please enter length :");
                    scanf("%f",&d);
                    printf("area of rectangle is:%funit^2",2*(c+d));
                }
                else if(b==3)
                {
                    printf("please enter radius:");
                    scanf("%f",&c);
                    printf("area of circle is:%funit^2",3.14*c*c);
                }
                else if(b==4)
               {
                printf("please enter length of cuboid:");
                scanf("%f",&c);
                printf("\nplease enter width of cuboid:");
                scanf("%f",&d);
                printf("\nplease enter height:");
                scanf("%f",&e);
                printf("\nvolume of cuboid is:%funit^3",c*d*e);
               }
               else if(b==5)
               {
                   printf("please enter edge:");
                   scanf("%f",&c);
                   printf("\nvolume of cube is:%funit^3",c*c*c);
               }
               else if(b==6)
               {
                   printf("please enter radius:");
                   scanf("%f",&c);
                   printf("\nvolume of sphere is:%funit^3",1.33*(3.14*c*c*c));
               }
            }
           else
           {
           printf("invalid number entered");
           }


    return 0;
}
