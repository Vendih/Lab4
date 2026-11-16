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
void swap(double *x, double *y){
    double t = *x;
    *x = *y;
    *y = t;
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
    int a, b;
    printf("Task 151|");
    do
    {
        /* code */
        printf(" Enter a and b > 0\n");
        scanf("%d %d", &a, &b);
    } while (a < 0 & b < 0);
    
    while (a > b)
    {
        /* code */
        printf("sqrt a = %.3lf\n", sqrt(a));
        a -= 1;
    }
    do
    {
        printf("sqrt a = %.3lf\n", sqrt(a));
        a -= 1;
    }while(a > b);
    
};
void task242(){
    double a, b, h;
    printf("task 242| enter a b\n");
    scanf("%lf %lf", &a, &b);
    printf("enter h\n");
    scanf("%lf", &h);
    if  (a>b){
        swap(&a, &b);
    }
    for (double x = a; x <= b ; x += h){
        double y = pow(x, 2) * pow(sin(x), 2) + 1;
        printf("%.3lf\t%.3lf\n", x, y);
    }

};
void task89(){
    int n = 0;
    double a, sum = 0;
    printf("task 89| enter n\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("enter a%d\n", i+1);
        scanf("%lf", &a);
        sum += a * a;
    }
    printf("sum of squares: %.3lf\n", sum);
};
double fx(int x){
    int a = 2;
    int b = 4;

    double part_one = 3.2 * a * b * pow(x, 2);
    double part_two = 1 + 2 * pow(cos(pow(x, 2)),3);
    if(part_two < 0 ){
        return NAN;
    }
    double part_three = (5 * a * part_two) / (4 * a * x - b);
    double y = part_one - part_three;
    return y;
}
void task258(){
    printf("task 258| result:\n");
    int x[8] = {-5, -4, -3, -2, 0, 4, 7, 10};
    for(int i = 0; i<8; i++){
        printf("%.3d\t%.3lf\n", x[i] , fx(x[i]));
    }
};
void task195(){
    printf("task 195| enter C\n");
    double c, p  = 0;
    scanf("%lf", &c);
    printf("enter P\n");
    scanf("%lf", &p);
    int mounth = 0;
    while ( p < c){
        p *= 1.05;
        mounth ++;
    }
    printf("mounth = %d\n", mounth);
};
void task186(){
    double a;
    printf("task 186| enter a <=1,5 && a > 1\n");
    do{
        printf("enter a: ");
        scanf("%lf", &a);
    }while(a<= 1.0 || a > 1.5);
    int c = 2;
    double b = 1.0 + 1.0 / c;
    while (b >= a){
        c++;
        b = 1.0 + 1.0 / c;
    }
    printf("result = %.10lf\n", b);
};
int main(){
    int choise;
    do{
        int all = 0;
        printf("\n====menu====\n");
        printf("1 - all\n");
        printf("2 - task 27\n");
        printf("3 - task 34\n");
        printf("4 - task 53\n");
        printf("5 - task 90\n");
        printf("6 - task 151\n");
        printf("7 - task 242\n");
        printf("8 - task 89\n");
        printf("9 - task 258\n");
        printf("10 - task 195\n");
        printf("11 - task 186\n");
        printf("0 - exit\n");
        printf("choise - : ");
        scanf("%d", &choise);
        
        switch(choise){
            case 1:
                all = 1;
            case 2:
                task27();
                if(all == 0) break;
            case 3:
                task34();
                if(all == 0) break;
            case 4:
                task53();
                if(all == 0) break;
            case 5:
                task90();  
                if(all == 0) break;
            case 6:
                task151();
                if(all == 0) break;
            case 7:
                task242();
                if(all == 0) break;
            case 8:
                task89();
                if(all == 0) break;
            case 9:
                task258();
                if(all == 0) break;
            case 10:
                task195();
                if(all == 0) break;
            case 11:
                task186();
            case 0:
                printf("exiting");
                break;
            default:
                printf("uncorrect choise");
                break;

        }
    }while(choise != 0);
    return 0;
}   
