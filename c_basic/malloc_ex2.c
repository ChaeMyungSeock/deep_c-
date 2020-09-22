#include <stdio.h>
#include <stdlib.h>

int main()
{
  int* a = (int*)malloc(5 * sizeof(int));

  for (int i=0; i<5; i++){
    printf("%d\n", a[i]);
  } // 어레이만 이렇게 써야함

  for (int i=0; i<5; i++){
    printf("%p\n",&a[i]);
  }
  return 0;
}