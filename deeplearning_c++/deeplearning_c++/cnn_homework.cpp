# include<stdio.h>
# include<math.h>
int main()
{
	int image[9] = {1,2,3,5,3,2,2,6,3};

	int kernel[4] = {1,0,1,1};

	int feature[4] = {0,0,0,0};

	// 정사각형일 때만 이렇게 적용 
	// 직사각형이라면 w,h 따로 구해서 따로 적용
	int image_size = sqrt(sizeof(image) / 4);
	int feature_size = sqrt(sizeof(feature) / 4);
	int kernel_size = sqrt(sizeof(kernel) / 4);
	printf("%d\n", image_size);
	printf("%d\n", feature_size);
	printf("%d\n", kernel_size);

	
	for (int i = 0; i < feature_size; i++) {
		for (int j = 0; j < feature_size; j++) {
			int sum = 0;

			for (int h = 0; h < kernel_size; h++) {
				for (int w = 0; w < kernel_size; w++) {
					sum += image[image_size * (i + h) + j + w] * kernel[kernel_size * h + w];
				}
			}
			feature[feature_size * i + j] = sum;
			printf("feature[%d] : %d\n", (feature_size * i + j), feature[feature_size * i + j]);
		}
	}
	// convolution 5*5 & 2*2
	// maxpooling

	return 0;
}