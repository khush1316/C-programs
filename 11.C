#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int n,n1,d=0,e=0;
    char c;
    float sum=0,s=0,s1=0;
    printf("Enter binary number:");
    scanf("%d %c %d",&n,&c,&n1);
    int a=n;
    int b=n1;
    while(n!=0)
    {
        d++;
        n/=10;
    }
    while(n1!=0)
    {
        e++;
        n1/=10;
    }
    for(int i=0;i<d;i++)
    {
        int r=a%10;
        sum=sum+(r*pow(2,i));
        a/=10;
    }
    for(int i=e;i>=1;i--)
    {
        int t=b%10;
        s=s+(t*pow(2,-i));
        b/=10;
    }
    s1=s+sum;
    printf("Decimal=%f",s1);
    getch();
    return 0;
}
