#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[5] = {1,2,3,4,5};
  // 배열

  for (int i=0; i<5; i++){
    //printf("a[%d] : %d\n",i,a[i]);
    printf("a[%d] : %p\n",i,&a[i]);
    // 주소값 int값은 4byte string 1byte
  
  }


  return 0;
}