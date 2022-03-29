#include <stdio.h>

int main()
{
    int a,b,c,product;
    printf(" please input a \n");
    scanf("%d" ,&a);
    printf(" please input b \n");
    scanf("%d" ,&b);
     printf(" please input a+b = \n");
    scanf("%d" ,&c);
    // Calculating product
    product = a + b;

    
    //printf("Product = %d", product);
    if(product==c){
        printf("right");
        
    }else{
        printf("error");
    }
    return 0;
}
