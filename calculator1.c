#include<stdio.h>
#include<math.h>
int main()
{
    unsigned int b;
    float c , d, e;
    unsigned int a;
    while(a!=5){ 
    printf("the different operations of this calculator include: \n1)mathematic operations\n2)temperature conversion\n3)distance conversion\n4)area and volume calculations\n5)exit\ntype what you wish to do :");
    scanf("%d",&a);
           if(a==1)
            {
               
                printf("what do you wish to do ?\n1)addition\n2)subtraction\n3)multiplication\n4)devision\n");
                scanf("%d",&b);
                if (b==1){
                 printf("please enter the first number:");
                scanf("%f",&c);
                printf("please enter the second number:");
                scanf("%f",&d);
                printf("your answer is:%f\n",c+d);}
                else if(b==2)
                { printf("please enter the first number:");
                scanf("%f",&c);
                printf("please enter the second number:");
                scanf("%f",&d);
                 printf("your answer is:%f\n",c-d);}
                else if(b==3){ printf("please enter the first number:");
                scanf("%f",&c);
                printf("please enter the second number:");
                scanf("%f",&d);
            
                 printf("your answer is:%f\n",c*d);}
                else if (b==4){
                     printf("please enter the first number:");
                scanf("%f",&c);
                printf("please enter the second number:");
                scanf("%f",&d);
                printf("your answer is:%f\n",c/d);}
                else
                printf("you've entered an invalid value\n");


            }
            else if(a==2)
            {
                
                printf("what do you wish to do ?\n1)celsius to fahrenhiet\n2)fahrenhiet to celsius\n");
                scanf("%d",&b);
                if(b==1){
                printf("please enter the temperature value:");
                scanf("%f",&c);
                printf("your temperature value after conversion is:%f°f\n",(c*1.8)+32);}
                else if(b==2){
                printf("please enter the temperature value:");
                scanf("%f",&c);
                 printf("your temperature value after conversion is:%f°c\n",(c-32)/1.8);}
                 else
                printf("you've entered an invalid value\n");
        


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
     printf("\nyour answer after conversion is :%fm\n",c*0.01);
     break;
     case (2):
     printf("\nyour answer after conversion is :%fcm\n",c*100);
     break;
     case (3):
     printf("\nyour answer after conversion is :%fkm\n",c*0.001);
     break;
     case(4):
     printf("\nyour answer after conversion is :%fm\n",c*1000);
     break;
     case(5):
     printf("\nyour answer after conversion is :%fkm\n",c*0.00001);
     break;
     case(6):
     printf("\nyour answer after conversion is :%fcm\n",c*100000);
     break;
      }
 }
            else
            printf("invalid value entered ");
            }

            else if(a==4)
            {
                printf("what do you wish to find ?\n1)area of square \n2)area of rectangle \n3)area of circle \n4)surface are of cuboid \n5)volume of cuboid \n6)surface are of cube \n7)volume of cube \n8)surface are of sphere 9)volume of sphere\n");
                scanf("%d",&b);
                if (b==1)
                {
                    printf("please enter side:" );
                    scanf("%f",&c);
                    printf("area of rectangle is:%funit^2\n",c*c);
                }
                else if (b==2)
                {
                    printf("pleas enter breadth :");
                    scanf("%f",&c);
                    printf("please enter length :");
                    scanf("%f",&d);
                    printf("area of rectangle is:%funit^2\n",2*(c+d));
                }
                else if(b==3)
                {
                    printf("please enter radius:");
                    scanf("%f",&c);
                    printf("area of circle is:%funit^2\n",3.14*c*c);
                }
                else if(b==4)
               {
                printf("please enter length of cuboid:");
                scanf("%f",&c);
                printf("\nplease enter width of cuboid:");
                scanf("%f",&d);
                printf("\nplease enter height:");
                scanf("%f",&e);
                printf("\nsurface area  of cuboid is:%funit^2\n",2*((c*d)+(d*e)+(c*e)));
               }
               else if(b==5){
                   printf("please enter length of cuboid:");
                scanf("%f",&c);
                printf("\nplease enter width of cuboid:");
                scanf("%f",&d);
                printf("\nplease enter height:");
                scanf("%f",&e);
                printf("volume of cuboid is: %fuints^3\n",c*d*e);
               }
               else if(b==6)
               {
                   printf("please enter edge:");
                   scanf("%f",&c);
                   printf("\nsurface are of cube is:%funit^2\n",6*c*c);
               }
               else if(b==7)
               {
                   printf("please enter edge:");
                   scanf("%f",&c);
                   printf("\nvolume of cube is:%funit^3\n",c*c*c);
               }
               else if (b==8){
                    printf("please enter radius:");
                   scanf("%f",&c);
                   printf("\nsureface area of sphere is:%funit^2\n",4*3.14*c*c);
               }
               else if (b==9)
               {
                    printf("please enter radius:");
                   scanf("%f",&c);
                   printf("\nvolume of sphere is:%funit^3\n",1.33*(3.14*c*c*c));
               }
            }
           else
           {
           printf("invalid number entered\n");
           }

    }
    
    return 0;
}
