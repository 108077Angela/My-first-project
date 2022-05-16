#include <iostream>
#include <stdio.h>
using namespace std;

int add_fun(int a,int b){
    return a + b;
}
int sub_fun(int a,int b){
    return a - b;
}
int mul_fun(int a,int b){
    return a * b;
}
int div_fun(int a,int b){
    return a / b;
}
int main()
{
    int a,b;
    printf("please input a num;\n");
    scanf("%d",&a);
    printf("please input a num;\n");
    scanf("%d",&b);
    printf(" a = %d , b = %d \n",a,b);
    printf(" a + b = %d \n",add_fun(a,b));
    printf(" a - b = %d \n",sub_fun(a,b));
    printf(" a * b = %d \n",mul_fun(a,b));
    printf(" a / b = %d \n",div_fun(a,b));
    
    cout<<"Hello world";
    return 0;
}    
