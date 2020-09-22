#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[3][3] = {{1,2,3},{5,3,2},{2,6,3}};
  int b[2][2] = {{1,0},{5,1}};
  int c[2][2] = {{0,0},{0,0}};

  // 배열
  int sum;
  for (int i=0; i<2; i++){
    for (int j=0; j<2; j++){
      sum = 0;
      for (int h=0; h<2; h++){
        for (int w=0; w<2; w++){
          sum += a[i+h][j+w]*b[h][w];
        }
      }
      c[i][j] += sum;
      printf("%d\n",c[i][j]);
    }
  }


  return 0;
}