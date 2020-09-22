padding = [[0,0,0,0,0]]
a = [[1,2,3],[5,3,2],[2,6,3]]
for i in range(len(a)):    
    b = [0]
    for j in range(len(a[i])):
        b.append(a[i][j])
    b.append(0)
    padding.append(b)


padding1 =[0,0,0,0,0]
padding.append(padding1)

print(padding)

b=[[1,0],[1,1]]
feature = [[0,0,0,0] for i in range(4)]

print(feature)
for i in range(4):
    for j in range(4):
        sum = 0

        for h in range(2):
            for w in range(2):
                sum += padding[i+h][j+w] * b[h][w] 
        feature[i][j] += sum
print(feature)


