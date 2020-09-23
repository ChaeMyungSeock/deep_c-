# padding stride 2차원 배열로 구현

image = [[0, 0, 0, 0, 0, 0],    ## image size = (4, 4), padding = (1, 1), stride = (3, 3)
         [0, 3, 2, 4, 5, 0],    ## if stride = (2,2) ...?
         [0, 2, 3, 1, 0, 0],
         [0, 4, 2, 1, 4, 0],
         [0, 3, 4, 7, 2, 0],
         [0, 0, 0, 0, 0, 0]]

kernel = [[1, 1, 0], [0, 1, 0], [1, 0, 1]] ## kernel size (3,3)

feature = [[0, 0] for i  in range(2)] ## feature map = (2, 2) // if stride = (2, 2), size?

## feature map

## first, 2D
## second, 1D
## if you want, 1D first okay


for f_h in range(2):
    for f_w in range(2):
        sum1 = 0
        for k_h in range(3):
            for k_w in range(3):
                sum1 += image[k_h+f_h*3][k_w+3*f_w]*kernel[k_h][k_w]
        feature[f_h][f_w] = sum1

print(feature)
