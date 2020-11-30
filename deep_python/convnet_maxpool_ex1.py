  
image = [[3,2,4,5,6],
[4,5,6,1,2],
[2,3,1,0,2],
[4,2,1,4,3],
[3,4,7,2,1]]

kernel = [[1,1],[0,1]]

feature = [[0,0,0,0] for i in range(4)]

#[[0,0,0,0],
# [0,0,0,0],
# [0,0,0,0],
# [0,0,0,0]]

for h in range(4): # featuremap 크기 기준
    for w in range(4):
        s=0
        for h1 in range(2): # 필터 크기 기준
            for w1 in range(2):
                s += image[h+h1][w+w1] * kernel[h1][w1]
        feature[h][w] += s

print(feature)


maxpool_feature = [[0,0] for i in range(2)]

for y in range(2):
    for u in range(2):
        max = -2147483648 # int 32의 최대 음수값

        for g in range(2):
            for h in range(2):
                if(max <feature[2*y+g][2*u+h]):
                    max = feature[2*y+g][2*u+h]
        maxpool_feature[y][u] +=max
print(maxpool_feature)