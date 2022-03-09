// 2. Write a program to find the smallest of three fractions.
// struct _fraction
// {
// int num,den;
// };
// typedef _fraction Fraction
// Fraction input_fraction();
// Fraction Largest_fraction(Fraction f1, Fraction f2, Fraction f3)
// void output(Fraction f1, Fraction f2, Fraction f3, Fraction largest)

#include <stdio.h>

typedef struct _fraction 
{
    int num;
    int den;
}Fraction;

void input_fraction(Fraction f1,Fraction f2,Fraction f3)
{
    printf("Enter the first fraction:\n");
    scanf("%d%d",&f1.num,&f1.den);
    printf("Enter the second fraction:\n");
    scanf("%d%d",&f2.num,&f2.den);
    printf("Enter the third fraction:\n");
    scanf("%d%d",&f3.num,&f3.den);
}

Fraction smallest_fraction(Fraction f1, Fraction f2, Fraction f3)
{
    float a,b,c;
    Fraction smallest;
    a=(f1.num/f1.den);
    b=(f2.num/f2.den);
    c=(f3.num/f3.den);
    if(a>b&&a>c)
    {
        smallest.num=f1.num;
        smallest.den=f1.den;
    }
    else if(b>a&&b>c)
    {
        smallest.num=f2.num;
        smallest.den=f2.den;
    }
    else
    {
        smallest.num=f3.num;
        smallest.den=f3.den;
    }
    return smallest;
}
void output(Fraction f1, Fraction f2, Fraction f3, Fraction smallest)
{
    printf("smallest of %d/%d , %d/%d , %d/%d is %d/%d",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,smallest.num,smallest.den);
}
int main()
{   
    Fraction f1,f2,f3,smallest;
    input_fraction(f1,f2,f3);
    smallest=smallest_fraction(f1,f2,f3);
    output(f1,f2,f3,smallest);
    return 0;
}