image = [3, 2, 4, 5, 2, 3, 1, 0, 4, 2, 1, 4, 3, 4, 7, 2] # (4,4)

# stride = (3,3)

# stride = 3    
stride = 0

kernel = [1, 1, 0, 0, 1, 0, 1, 0, 1] ## kernel size (3,3)

# print(len(image)) 16
pad_len = int(len(image)**0.5) # 4
# print(pad_len)
kernel_size = int(len(kernel)**0.5) # 3
print(kernel_size)

def pad(image,kernel, stride):
    if stride == 0:
        img_length = int(len(image)**0.5) # 4
        kernel_size = int(len(kernel)**0.5)
        pad_w = (kernel_size-1)*2 +  img_length # 4 + 4 = 8
        pad_image = [0 for i in range(pad_w**2)]
        pad_list = [ i  for i in range(pad_w) if i< (pad_w - img_length )//2 or i>= img_length + (pad_w - img_length) //2 ]
        for i in range(pad_w):
            for j in range(pad_w):
                if i in pad_list or j in pad_list:
                    pass
                else:
                    pad_image[pad_w * i + j] = image[img_length * (i-2) + (j-2)]



    else:
        return 1


    return pad_image

# a = [ i  for i in range(8) if i< (8-4)//2 or i>= 4 + (8-4)//2 ]

# print(a)

print(len(pad(image, kernel, stride)))