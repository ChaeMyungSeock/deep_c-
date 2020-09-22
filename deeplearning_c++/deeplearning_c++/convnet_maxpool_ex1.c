//# include<stdio.h>
//
//int main()
//{
//	int image[5][5] = { {3,2,4,5,6},
//				  {4,5,6,1,2},
//				  {2,3,1,0,2},
//				  {4,2,1,4,3},
//				  {3,4,7,2,1} };
//
//	int kernel[2][2] = { {1,1},{0,1} };
//
//	int feature[4][4] = { {0,0,0,0},
//						{0,0,0,0},
//						{0,0,0,0},
//						{0,0,0,0} };
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			int sum = 0;
//
//			for (int h = 0; h < 2; h++) {
//				for (int w = 0; w < 2; w++) {
//					sum += image[i + h][j + w] * kernel[h][w];
//				}
//			}
//			feature[i][j] += sum;
//			printf("%d\n", feature[i][j]);
//		}
//	}
//
//	int maxpool[2][2] = { {0,0},
//						  {0,0} };
//
//
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 2; j++) {
//			int sum = -2147483647;
//
//			for (int h = 0; h < 2; h++) {
//				for (int w = 0; w < 2; w++) {
//					if (sum < feature[2*i + h][2*j + w]) {
//						sum = feature[2*i + h][2*j + w];
//					}
//				}
//			}
//			maxpool[i][j] += sum;
//			printf("%d\n", maxpool[i][j]);
//		}
//	}
//
//	// convolution 5*5 & 2*2
//	// maxpooling
//
//	return 0;
//}