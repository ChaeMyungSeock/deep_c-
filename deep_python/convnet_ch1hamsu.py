
image = [1,2,3,5,3,2,2,6,3]
kernel = [1,0,1,1]
featuremap = [0,0,0,0]

def convnet_ch1(image, kernel, featuremap):

    image_length = int(len(image)**0.5)
    kernel_length = int(len(kernel)**0.5)
    feature_length = int(len(featuremap)**0.5)

    for feat_h in range(feature_length):
        for feat_w in range(feature_length):
            sum = 0

            for kernel_h in range(kernel_length):
                for kernel_w in range(kernel_length):
                    sum += image[image_length * (feat_h + kernel_h) + feat_w + kernel_w] * kernel[feature_length * kernel_h + kernel_w] # a[i+h][j+w] == a[3*(i+h)+j+w]
            featuremap[feature_length * feat_h + feat_w] = sum
    return featuremap

print(convnet_ch1(image, kernel, featuremap))
