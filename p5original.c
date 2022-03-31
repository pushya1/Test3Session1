// 5. write a program to find the index of the largest number in an array.
// int input_size();
// void input_array(int n, int a[n]);
// int find_largest(int n, int a[n]);
// void out_put(int n, int a[n], int largest);
#include <stdio.h>
int input_size()
{
    int n;
    printf("Enter the size of array:\n");
    scanf("%d",&n);
    return n;
}

void input_array(int n,int a[n])
{   
    for(int i=0;i<n;i++)
    {
        printf("Enter the number:\n");
        scanf("%d",&a[i]);
    }
    
}

int find_largest(int n, int a[n])
{
    int l=0;
    int largest;
    for(int i=0;i<n;i++)
    {   
        if(a[i]>l)
        {
            l=a[i];
            largest=i;
        }
        
    }
    return largest;
}
void out_put(int n, int a[n], int largest)
{
    printf("In the given array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("The largest number index is %d\n",largest);
}
int main()
{   int n;
    n=input_size();
    int a[n];
    input_array(n,a);
    int largest=find_largest(n,a);
    out_put(n,a,largest);
    
}