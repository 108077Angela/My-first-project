#include <stdio.h>

int main()
{
    int a,b;
    printf(" please input two \n");
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    if(a > b ){
        printf("yes a > b");
        
    }else{
        printf("no a < b");
    }
    return 0;
}
