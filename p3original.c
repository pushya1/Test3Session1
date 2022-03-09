// 3. Write a program find the nCr given n and r.
// int input_n_and_r(int *n, int *r)
// int ncr(int n, int r);
// void output(int n, int r, int result);
#include <stdio.h>
void input_n_andr(int *n, int *r)
{
    printf("Enter the n value:\t");
    scanf("%d",n);
    printf("Enter the r value:\t");
    scanf("%d",r);
}

int fact(int i)
{
    int f=1;
    for(i;i>=1;i--)
    {
        f=f*i;
    }
    return f;
}

int ncr(int n, int r)
{
    int result;
    result = fact(n)/(fact(r)*fact(n-r));
    return result;

}
void output(int n, int r, int result)
{
    printf("The value of %dc%d = %d\n",n,r,result);

}
int main()
{
    int n,r,result;
    input_n_andr(&n,&r);
    result=ncr(n,r);
    output(n,r,result);
    return 0;
}
