#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;


void convnet_stridehamsu(vector<int>& _image, vector<int>& _kernel, int _stride, vector<int>& _featuremap);

int main() {

	//input
	vector<int> image = { 0, 0, 0, 0, 0, 0, 0, 3, 2, 4, 5, 0, 0, 2, 3, 1, 0, 0, 0, 4, 2, 1, 4, 0, 0, 3, 4, 7, 2, 0, 0, 0, 0, 0, 0, 0 };
	vector<int> kernel = { 1, 1, 0, 0, 1, 0, 1, 0, 1 };
	vector<int> stride = { 3,3 };

	//output
	vector<int> featuremap;

	int imageLength = sqrt(image.size());
	int kernalLength = sqrt(kernel.size());
	int featureLength = (imageLength - kernalLength) / stride[0] + 1;
	featuremap.assign(featureLength*featureLength, 0);


	//printf("%d", featureLength);

	convnet_stridehamsu(image, kernel, stride[1], featuremap);

	for (int i = 0; i < featureLength * featureLength; i++)
	{
		printf("%d ", featuremap[i]);
	}

	return 0;
}



void convnet_stridehamsu(vector<int>& _image, vector<int>& _kernel, int _stride, vector<int>& _featuremap) {

	int imageLength = sqrt(_image.size());
	int kernalLength = sqrt(_kernel.size());
	int featureLength = (imageLength - kernalLength) / _stride + 1;



	for (int feat_h = 0; feat_h < featureLength; feat_h++)
	{
		for (int feat_w = 0; feat_w < featureLength; feat_w++)
		{
			int sum = 0;

			for (int kernel_h = 0; kernel_h < kernalLength; kernel_h++)
			{
				for (int kernel_w = 0; kernel_w < kernalLength; kernel_w++)
				{
					sum += _image[_stride * (feat_h + feat_w) + imageLength * kernel_h + kernel_w] * _kernel[kernalLength * kernel_h + kernel_w];
				}

			}
			_featuremap[featureLength * feat_h + feat_w] = sum;			

		}

	}
}