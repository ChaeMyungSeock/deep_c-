#include<stdio.h>
#include<stdlib.h>
#include "header.h"
int add(int x, int y);
int multiply(int x, int y);
// 정의해주는건 한눈에 보기 편함 선언하는 의미도 있고

int main()
{
  int a = 3, b = 4;
  
  int d = add(a,b);
  int c = multiply(a,b);
  
  printf("%d\n",c);
  printf("%d\n",d);
  
  return 0;
}


