img_ch1 = [1, 4, 1, 5, 2, 0, 9, 2, 7]
img_ch2 = [3, 2, 5, 2, 1, 3, 4, 5, 0]

kernel_ch11  = [1, 0, 1, 1]
kernel_ch21 = [0, 1, 0, 1]
kernel_ch12 = [1, 0, 0, 1]
kernel_ch22 = [0, 1, 1, 0]
kernel_ch13 = [1, 1, 0, 0]
kernel_ch23 = [0, 0, 1, 0]

# image * kernel

# (3, 3, 2) * (2, 2, 2, 3)
# ---> (2, 2, 3) // shape
# 세로 2 가로 2 채널 3 이 나옴
# 왜 그렇게 계산되는지, 이해되면 코딩 짜보기
feat_im1 = [0,0,0,0]
feat_im2 = [0,0,0,0]
feat_im3 = [0,0,0,0]


length = len(img_ch1)
k_len = len(kernel_ch11)
feat_len = len(feat_im1)
# print(length)
length = int(length ** 0.5)
k_len = int(k_len ** 0.5)
feat_len = int(feat_len**0.5)
print(k_len)

for f_h in range(feat_len):
    for f_w in range(feat_len):
        sum1 = 0
        sum2 = 0

        for k_h in range(k_len):
            for k_w in range(k_len):
                sum1 += img_ch1[length*(f_h+k_h)+f_w+k_w]*kernel_ch11[k_len*k_h+k_w]
                sum2 += img_ch2[length*(f_h+k_h)+f_w+k_w]*kernel_ch21[k_len*k_h+k_w]
        feat_im1[k_len*f_h + f_w] = sum1 + sum2

for f_h in range(feat_len):
    for f_w in range(feat_len):
        sum1 = 0
        sum2 = 0

        for k_h in range(k_len):
            for k_w in range(k_len):
                sum1 += img_ch1[length*(f_h+k_h)+f_w+k_w]*kernel_ch12[k_len*k_h+k_w]
                sum2 += img_ch2[length*(f_h+k_h)+f_w+k_w]*kernel_ch22[k_len*k_h+k_w]
        feat_im2[k_len*f_h + f_w] = sum1 + sum2

for f_h in range(feat_len):
    for f_w in range(feat_len):
        sum1 = 0
        sum2 = 0

        for k_h in range(k_len):
            for k_w in range(k_len):
                sum1 += img_ch1[length*(f_h+k_h)+f_w+k_w]*kernel_ch13[k_len*k_h+k_w]
                sum2 += img_ch2[length*(f_h+k_h)+f_w+k_w]*kernel_ch23[k_len*k_h+k_w]
        feat_im3[k_len*f_h + f_w] = sum1 + sum2

print(feat_im1)
print(feat_im2)
print(feat_im3)
