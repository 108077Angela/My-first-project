#include <stdio.h>
using namespace std;
#define N 10
#define N1 10
int main()
{
    int i,j, a[N]={0};
    float sum=0;

    for(i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++){
        printf(" a[%d]= %d \n",i,a[i]);

        sum += a[i]; // sum = sum + a[i]
        printf(" sum= %f \n",sum);
        
}
        sum /= 10; // sum = sum / a[i]
        printf(" sum= %2.3f \n",sum);
}
