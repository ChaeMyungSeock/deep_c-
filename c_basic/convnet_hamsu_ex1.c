#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// image = [1,2,3,5,3,2,2,6,3];
// kernel = [1,0,1,1];
// featuremap = [0,0,0,0];
// int* a = (int*)malloc(5 * sizeof(int));

void convnet(int* image, int* kernel, int* featuremap);

int image1[9] = { 1,2,3,5,3,2,2,6,3 };
int featuremap1[4] = { 0,0,0,0 };
int kernel1[4] = { 1,0,1,1 };

int image_length = sqrt(sizeof(image1) / sizeof(int));
int kernel_length = sqrt(sizeof(kernel1) / sizeof(int));
int feature_length = sqrt(sizeof(featuremap1) / sizeof(int));

int main()
{
	int* image = (int*)malloc(sizeof(image1));
	int* kernel = (int*)malloc(sizeof(kernel1));
	int* featuremap = (int*)malloc(sizeof(featuremap1));
	//printf("%d", image_length);
	//printf("%d", kernel_length);

	
	for (int i = 0; i < sizeof(image1) / sizeof(int); i++)
	{
		image[i] = image1[i];
	}
	for (int i = 0; i < sizeof(kernel1) / sizeof(int); i++)
	{
		kernel[i] = kernel1[i];
	}
	for (int i = 0; i < sizeof(featuremap1) / sizeof(int); i++)
	{
		featuremap[i] = featuremap1[i];
	}
	//printf("feature_length = %d\n", feature_length);


	convnet(image, kernel, featuremap);

	for (int i = 0; i < sizeof(featuremap1) / sizeof(int); i++)
	{
		printf("%d\n", featuremap[i]);
	}
	return 0;


}

void convnet(int* image, int* kernel, int* featuremap)
{



	for (int feat_h = 0; feat_h < feature_length; feat_h++)
	{
		for (int feat_w = 0; feat_w < feature_length; feat_w++)
		{
			int sum = 0;

			for (int kernel_h = 0; kernel_h < kernel_length; kernel_h++)
			{
				for (int kernel_w = 0; kernel_w < kernel_length; kernel_w++) {


					sum += image[image_length * (feat_h + kernel_h) + feat_w + kernel_w] * kernel[feature_length * kernel_h + kernel_w];  // a[i+h][j+w] == a[3*(i+h)+j+w]
					featuremap[feature_length * feat_h + feat_w] = sum;
				}
			}

		}

	}
}