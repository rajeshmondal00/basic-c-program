//basic calculator using two variables
#include<stdio.h>
int a,d,m,s;
void add(int n1,int n2)
{
    a=n1+n2;
    printf("the value is %d",a);
}
void div(int n1,int n2)
{
    d=n1/n2;
    printf("the value is %d",d);
}
void mul(int n1,int n2)
{
    m=n1*n2;
    printf("the value is %d",m);
}
void sub(int n1,int n2)
{
    s=n1-n2;
    printf("the value is %d",s);
}

int main()
{
    int n1,n2,fun;
    printf("enter the first number: ");
    scanf("%d",&n1);
    printf("enter the second number: ");
    scanf("%d",&n2);
    printf("1.add,2.div,3.mul,4.sub\n");
    printf("which operation you want to perform: ");
    scanf("%d",&fun);
    void (*ptr[])(int,int) = {add,div,mul,sub};
    (*ptr[fun-1])(n1,n2);   
    return 0;
}