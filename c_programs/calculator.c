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
