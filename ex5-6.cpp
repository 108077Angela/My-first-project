#include <stdio.h>

int main()
{
    int x,y;
    printf(" x < 0, y==1 \n");
    printf(" x > 0, y==3 \n");
     printf(" please input x == \n");
    scanf("%d" ,&x);
    
    if(x < 0){
        printf("y==1");
        
    }else{
        printf("y==3");
    }
    return 0;
}
