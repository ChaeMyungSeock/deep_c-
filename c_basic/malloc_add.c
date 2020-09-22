#include <stdio.h>
#include <stdlib.h>

void add_array(int* z,int* x, int* y, int length)
{
  for (int i=0; i<length; i++){
    z[i] = x[i] + y[i];

  }
}

/*
int* add_array(int* z, int* y, int length)
{
  for (int i=0; i<length; i++){
    z[i] = x[i] + y[i];

  }
  return z
}



*/

int main()
{
//  int* a = (int*)malloc(5 * sizeof(int));
//  int* b = (int*)malloc(5 * sizeof(int));
  int l=5;
  int* a = (int*)malloc(l * sizeof(int));
  int* b = (int*)malloc(l * sizeof(int));

// malloc은 배열을 변수로 크기를 선정할 수 있음, 
// 일반 배열은 변수로 크기 지정 x


  for (int i=0; i<5; i++){
    a[i] = 2*i;
  }

  for (int i=0; i<5; i++){
    b[i] = 2* i + 1;
  }

  int* c = (int* )malloc(5 * sizeof(int));

  add_array(c, a, b, 5);
  for (int j = 0; j< 5; j++){
    c[j] = a[j] + b[j];
    printf("%d\n", c[j]);
  }

  free(a);
  free(b);
  free(c);

  
  return 0;
}