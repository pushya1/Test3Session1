// 7. Write a program to add two fractions.
// struct _fraction
// {
// int num,den;
// };
// typedef _fraction Fraction;
// int find_gcd(int a, int b);
// Fraction input_fraction();
// Fraction add_fractions(Fraction f1, Fraction f2)
// void output(Fraction f1, Fraction f2, Fraction f3, Fraction sum)
#include<stdio.h>
typedef struct _fraction
{
    int num;
    int den;
}Fraction;

Fraction input_fraction()
{   
    Fraction f1;
    printf("Enter the fraction :\n");
    scanf("%d %d",&f1.num,&f1.den);
    return f1;
}

Fraction add_fractions(Fraction f1, Fraction f2)
{
    Fraction f3;
    f3.num=(f1.num*f2.den)+(f2.num*f1.den);
    f3.den=f1.den*f2.den;
    return f3;
}

void output(Fraction f1,Fraction f2,Fraction f3)
{   
    float result;
    result = f3.num*1.0/f3.den*1.0;
    printf("The sum of %d/%d + %d/%d = %d/%d =   %.2f\n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,result);
}

int main()
{
    Fraction f1,f2,f3;
    f1=input_fraction();
    f2=input_fraction();
    f3=add_fractions(f1,f2);
    output(f1,f2,f3);
    return 0;
    
}