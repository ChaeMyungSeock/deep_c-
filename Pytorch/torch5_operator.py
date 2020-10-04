# 선형대수의 연산자

'''
dot : 벡터 내적

mv : 행렬과 벡터의 곱

mm : 행렬과 행렬의 곱

matmul : 인수의 종류에 따라 자동으로 dot, mv, mm을 선택해서 실행

gesv : LU분해를 사용한 연립 방정식의 해

elg,symeig : 고유값 분해, symeig는 대칭 행렬보다 효율이 좋은 알고리즘

svd : 특이값 분해
'''
import torch

m = torch.randn(100, 10)
v = torch.randn(10)

# 내적
d = torch.dot(v, v)

# 100 x 10의 행렬과 길이 10인 벡터의 곱
# 결과는 길이 100인 벡터
v2 = torch.mv(m, v)

# 행렬 곱
m2 = torch.mm(m.t(), m)
print(m2)   # shape (10, 10)

# 특이값 분해
u, s, v = torch.svd(m)
# print(torch.svd(m))