image = [0, 0, 0, 0, 0, 0, 0, 3, 2, 4, 5, 0, 0, 2, 3, 1, 0, 0, 0, 4, 2, 1, 4, 0, 0, 3, 4, 7, 2, 0, 0, 0, 0, 0, 0, 0]    

## image size = (4, 4), padding = (1, 1), stride = (3, 3)
## if stride = (2,2) ...?
         

kernel = [1, 1, 0, 0, 1, 0, 1, 0, 1] ## kernel size (3,3)

feature = [0 for i  in range(4)] ## feature map = (2, 2) // if stride = (2, 2), size?
image_w = int(len(image)**0.5)
print(image_w)
# tensorflow와 pytorch의 방식이 다르다 

print(feature)


for f_h in range(2):
    for f_w in range(2):
        sum1 = 0
        for k_h in range(3):
            for k_w in range(3):
                sum1 += image[3*(f_h+f_w+2*k_h)+k_w]*kernel[3*k_h+k_w]
                
                # print(3*k_h+k_w) 0,1,2,3,4,5,6,7,8
        feature[2*f_h+f_w] = sum1
print(feature)
#[[6, 6], [7, 7]]

