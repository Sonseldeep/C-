#include<stdio.h>
int main(){

    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {         printf("%d",i);
    }
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        if(i%2!=0){
            sum += i;

        }
        
    }
    printf("\nsum = %d",sum);
    return 0;
}