#include <iostream>
using namespace std;
#define N 3
#define N1 10
int main()
{
int i,j, a[N]={3,4,1};

for(i=0;i<N;i++){
printf(" a[%d]= %d \n",i,a[i]);
}

for(i=1;i<N1;i++){
    for(j=1;j<N1;j++){
      printf(" %d * %d = %d \n",i,j,i*j);
    }
}
/*
for(i=1;i<N1;i++){
printf(" %d * %d = %d \n",i,2,i*2);
}
*/
cout<<"Hello World";

return 0;
}
