
a = [1,2,3,5,3,2,2,6,3]
b = [1,0,1,1]
c = [0,0,0,0]

length = int(len(a)**0.5)
feature_length = int(len(c)**0.5)

for i in range(2):
    for j in range(2):
        sum = 0

        for h in range(2):
            for w in range(2):
                sum += a[length*(i+h)+j+w] * b[feature_length*h+w] # a[i+h][j+w] == a[3*(i+h)+j+w]
        c[feature_length*i+j] = sum

print(c)
