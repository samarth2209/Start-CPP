#include<stdio.h>
int add(int n){
    int i;
    int sum;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    return sum;
}
int main()
{
    int n;
    int sum;
    printf("Enter a number: ");
    scanf("%d",&n); 
    sum = add(n);    
    printf("Sum of all number from 1-%d is %d",n,sum);
    return 0;
}