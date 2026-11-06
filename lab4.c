#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long double factorial(int n){
    long double result = 1;
    for (int i = 2; i <= n; i++)
    {
        /* code */
        result *= i;
    }
    return result;
}
void task27(){
    double x = 0;

    printf("task 27| Enter number\n");
    scanf("%lf", &x);
    x= x - pow(x, 3)/factorial(3) + pow(x, 5)/factorial(5) - pow(x, 7)/factorial(7) + pow(x, 9)/factorial(9) - pow(x, 11)/factorial(11) + pow(x, 13)/factorial(13);
    printf("result: %.3lf\n", x);
}
void task34(){
    double x = 0;
    long n = 0;
    double result = 0;
    printf("task34| enter Natural n and Real x\n");
    do
    {
        /* code */
        printf("enter Natural n\n");
        scanf("%ld", &n);
    } while (n < 0);
    printf("Enter x\n");
    scanf("%lf", &x);
    for (int i = 1; i <= n; i++)
    {
        result += sin(pow(x, i));
    }
    printf("result: %.3lf\n", result);

};
void task53(){
    double s = 0;
    s = pow(2, 11) - 1 - pow(2, 0) - pow(2, 1);
    printf("task 53| s = 2^2+...+2^10 result: %.1lf\n", s);
};
void task90(){
    const int size = 10;
    double a[size], result = 0;
    printf("Task90| Enter %d numbers\n", size);
    for (int i = 0; i < size; i++)
    {
        int d= i+1;
        printf("enter a%d\n",d);
        scanf("%lf", &a[i]);
    }
    for (int i = 0; i < size; i++)
    {
        result += a[i];
    }
    result /= size;
    printf("result: %.2lf\n", result);    
};
void task151(){
    double a, b;
    printf("Task 151|");
    do
    {
        /* code */
        printf(" Enter a and b > 0\n");
        scanf("%lf %lf", &a, &b);
    } while (a > 0 & b>0);
    while (a > b)
    {
        /* code */
        
    }
    
};
void task242();
void task89();
void task258();
void task195();
void task186();
int main(){
    //task27();
    //task34();
    //task53();
    task90();
    return 0;
}   
