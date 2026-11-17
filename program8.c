#include<stdio.h>
int main()
{
    int number, original,temp,digit;
    int count=0,sum=0,reverse=0;
    printf("enter a positive integer:");
    scanf("%d",&number);
    if(number<=0)
    {
        printf("please enter a positive integer.\n");
        return 0;
    }
    original=number;
    temp=number;
    while(temp>0)
    {
        digit=temp%10;
        count++;
        sum=sum+digit;
        reverse=reverse*10+digit;
        temp=temp/10;
    }
    printf("number of digits=%d\n",count);
    printf("sum of digits=%d\n",sum);
    printf("reversed number=%d\n",reverse);
    if(original==reverse)
    printf("the number is a polindrome.\n");
    else
    printf("the number is not a polindrome.\n");
    return 0;
}