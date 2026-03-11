#include<stdio.h>
#include<math.h>
float add(float a,float b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
float power(float base,float power);
float squareroot(int num);

//function definitons//
float add(float a,float b){
    return a+b;
}
float subtract(float a,float b){
    return a-b;
}

float multiply(float a,float b){
    return a*b;
}
float divide(float a,float b){
    if (b==0){
    printf("Division by zero is not possible");
    return 0;
    }
    return a/b;
}
float power(float base,float power){
    return pow(base,power);

}
float squareroot(int num){
    if(num<0){
        printf("Error:square root of negative number is not possible");
        return 0;
    }
    return sqrt(num);

}


//Main program//
int main(){
    int ch;
    float num1,num2,result;

    do
    {
     printf("\n******DESKTOP CALCULATOR******");
     printf("1.Addition\n");
     printf("2.Subtraction\n");
     printf("3.Multiplication\n");
     printf("4.Divion");
     printf("5.exponent\n");
     printf("6.Squareroot");
     printf("7.Exit");

     printf("Enter your choice :");
     scanf("%d",&choice);


     switch(ch){
        case 1:
        printf("Enter two numbers:");
        scanf("%f%f",&num1,&num2);
        result=add(num1,num2);
        printf("Result=%.2f\n",result);
        break;

        case 2:
        printf("enter two numbers : ");
        scanf("%f%f",&num1,&num2);
        result=subtract(num1,num2);
        printf("Result =%.2f\n",result);
        break;

         case 3:
        printf("enter two numbers : ");
        scanf("%f%f",&num1,&num2);
        result=multiply(num1,num2);
        printf("Result =%.2f\n",result);
        break;

         case 4:
        printf("enter two numbers : ");
        scanf("%f%f",&num1,&num2);
        result=divide(num1,num2);
        printf("Result =%.2f\n",result);
        break;

         case 5:
        printf("enter base and power : ");
        scanf("%f%f",&num1,&num2);
        result=exponent(num1,num2);
        printf("Result =%.2f\n",result);
        break;

         case 6:
        printf("enter a number : ");
        scanf("%f",&num1);
        result=squareroot(num1);
        printf("Result =%.2f\n",result);
        break;

        case 7:
        printf("Exiting calculator...");
        break;

        default:
        printf("Invalid choice \n");
     }
        /* code */
    } while (ch!=7);
    return 0;
    
}
