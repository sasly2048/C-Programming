#include <stdio.h>

int main()
{
    float si;
    float p, r, t;
    printf("Enter principal amount: ");
    scanf("%f", &p);
    printf("Enter rate of interest: ");
scanf("%f", &r);
    printf("Enter time in years: ");        
scanf("%f", &t);
    si = (p * r * t) / 100; 
    printf("Simple Interest = %.2f\n", si);
    printf("Total Amount = %.2f\n", p + si);
    printf("Total Amount after %.2f years = %.2f\n", t, p + si);

    return 0;
}