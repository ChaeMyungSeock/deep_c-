#include <stdio.h>
#include <math.h>



void convnet(int image, int kernel, int featuremap);


int main()
{
    int* image = (int*)malloc(9 * sizeof(int));
    int* kernel = (int*)malloc(4 * sizeof(int));
    int* featuremap = (int*)malloc(4 * sizeof(int));
    
    
    
    int image1[9] = { 1,2,3,5,3,2,2,6,3 };
    int featuremap1[4] = { 0,0,0,0 };
    int kernel1[4] = { 1,0,1,1 };
    
    convnet(image, kernel, featuremap);

    printf("%d", featuremap);
    return 0;


}

void convnet(int* image, int* kernel, int* featuremap)
{
   
    int image_length = sqrt(sizeof(image) / sizeof(int));
    int kernel_length = sqrt(sizeof(kernel) / sizeof(int));
    int feature_length = sqrt(sizeof(featuremap) / sizeof(int));

    for (int feat_h = 0; feat_h < feature_length; feat_h++)
    {
        for (int feat_w = 0; feat_w < feature_length; feat_w++)
        {
            int sum = 0;

            for (int kernel_h = 0; kernel_h < kernel_length; kernel_h++)
            {
                for (int kernel_w = 0; kernel_w < kernel_length; kernel_w++){

                
                    sum += image[ image_length * (feat_h + kernel_h) + feat_w + kernel_w ] *kernel[feature_length * kernel_h + kernel_w ];  // a[i+h][j+w] == a[3*(i+h)+j+w]
                    featuremap[ feature_length * feat_h + feat_w ] = sum;
                }
            }

        }

    }
}


//  image = [1,2,3,5,3,2,2,6,3];
// kernel = [1,0,1,1];
// featuremap = [0,0,0,0];
// int* a = (int*)malloc(5 * sizeof(int));