#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <vector>
#include <iostream>

using namespace std;


void convnet_padhamsu_tensorflow(vector<int>& _image, vector<int>& _kernel, int _stride, vector<int>& padmap, vector<int>& pad_index);

int main() {

	//input
	vector<int> image = { 3, 2, 4, 5, 2, 3, 1, 0, 4, 2, 1, 4, 3, 4, 7, 2 };
	vector<int> kernel = { 1, 1, 0, 0, 1, 0, 1, 0, 1 };
	vector<int> stride = { 2,2 };

	//output
	vector<int> padMap;
	vector<int> padIndex;

	int imageLength = sqrt(image.size());
	int kernalLength = sqrt(kernel.size());
	int padLength = stride[1] * (imageLength - 1) - imageLength + kernalLength;

	padIndex.assign(imageLength + padLength,0);
	padMap.assign((imageLength + padLength) * (imageLength + padLength), 0);


	convnet_padhamsu_tensorflow(image, kernel, stride[1], padMap, padIndex);


	int cnt = 0;

	for (int i = 0; i < (imageLength + padLength) * (imageLength + padLength); i++)
	{
		cnt += 1;


		printf("%d  ", padMap[i]);
		if (cnt == (imageLength + padLength))
		{
			printf("\n");
			cnt = 0;

		}
	}

	return 0;
}

void convnet_padhamsu_tensorflow(vector<int>& _image, vector<int>& _kernel, int _stride, vector<int>& _padmap, vector<int>& _padIndex) {

	int imageLength = sqrt(_image.size());
	int kernalLength = sqrt(_kernel.size());
	int padLength = _stride * (imageLength - 1) - imageLength + kernalLength;


	/*for (int i = 0; i < (imageLength + padLength); i++)
	{
		if (i < padLength / 2 or i >= imageLength + padLength / 2)
		{
			_padIndex[i] = 1;
		}
		else
		{
			_padIndex[i] = 0;
		}
		printf("%d ", _padIndex[i]);
	}*/

	for (int pad_h = 0; pad_h < (imageLength + padLength); pad_h++)
	{
		for (int pad_w = 0; pad_w < (imageLength + padLength); pad_w++)
		{
			if (pad_h <padLength/2 or pad_h >= (imageLength + padLength/2) or pad_w < padLength/2 or pad_w >= (imageLength + padLength/2))
			{
				continue;
			}
			else
			{
				_padmap[(imageLength + padLength) * pad_h + pad_w] = _image[imageLength * (pad_h - padLength / 2) + (pad_w - padLength / 2)];

			}

		}


	}
}