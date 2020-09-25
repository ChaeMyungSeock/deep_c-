image = [3, 2, 4, 5, 2, 3, 1, 0, 4, 2, 1, 4, 3, 4, 7, 2] # (4,4)
# stride = 3   # [3,3]
stride = [1,1] # 1
 
# kernel = [1, 1, 0, 0, 1, 0, 1, 0, 1] ## kernel size (3,3)
kernel = [1, 1, 0, 0] ## kernel size (2,2)
padding_size = 1
# Output Size = (W - F + 2P) / S + 1 ==> torch
# Output Size = (W - F + P(ALL)) / S + 1 == tensorflow
# W: input_volume_size

# F: kernel_size

# P: padding_size

# S: strides

def torch_pad(image,kernel, stride, padding_size):
    img_W = int(len(image)**0.5) # 4
    kernel_size = int(len(kernel)**0.5)
    stride = int(stride[0])
    pad_num = 2*padding_size +img_W
    
    pad_image = [0 for i in range((pad_num)**2)]
    # 0으로 가득찬 초기 pad_image

    pad_list = [ i  for i in range(pad_num) if i< padding_size or i>= img_W+padding_size]
    # 원래 이미지를 제외한 패딩으로 둘러싸일 부분을 리스트 인덱스로 반환받아서 그부분은 처음에 선언한 0으로 그대로 pass
    # 패딩할 부분을 제외한 부분은 원래 이미지로 반환
    for i in range(pad_num): # pad_img_len = img_W+pad 
        for j in range(pad_num):
            if i in pad_list or j in pad_list:
                pass
            else:
                pad_image[(pad_num) * i + j] = image[img_W * (i-padding_size) + (j-padding_size)]

    return pad_image

print(torch_pad(image, kernel, stride,padding_size))