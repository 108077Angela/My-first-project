/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

#include <stdio.h>

int main() {
    int a, b, product;
    a = 11;
    b = 26;

 
    // Calculating product
     product = a + b;

 
    printf(" a + b = %d \n", product);
    
     product = a - b;

 
    printf("a - b = %d \n", product);
    
    
     product = a * b;

 
    printf("a * b = %d \n", product);
    
    
     product = a / b;

 
    printf("a / b = %d \n", product);
    
     product = a % b;

 
    printf("a mod b = %d \n", product);
    
    
    /*
    ++x
x++
--x
x--

x = 16      0000 1000
x >> 1
x >> 2
x << 1
    */
    printf("a = %d \n ", a);
    
    
    ++a; 
 
    printf("++a = %d \n ", a);
    
    a++; 

    printf("a++ = %d \n ", a);
    
    
    
    printf("b = %d \n ", b);
    
    ++b;
    
    printf("++b = %d \n", b);
    
    b++;
    
    printf("b++ = %d \n", b);
    
    
    return 0;
}
