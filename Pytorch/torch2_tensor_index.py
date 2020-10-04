import torch
import torch.nn as nn
import torch.optim as optim
import torch.utils

t = torch.tensor([[1, 2, 3], [4, 5, 6.]])

# 스칼라 첨자 지정
print(t[0, 2])      # tensor(3.)

# 슬라이스로 지정
print(t[:,: 2])     # tensor([[1., 2.],[4., 5.]])

# 리스트로 지정
print(t[:, [1,2]])  # tensor([[2., 3.],[5., 6.]])

# 마스크 배열을 사용해서 3보다 큰 부분만 선택
print(t[t > 3])     # tensor([4., 5., 6.])

# [0, 1]의 요소를 100으로 설정
t[0,1] = 100
print(t[0,1])       # tensor(100.)

# 슬라이스를 사용한 일괄 대입
t[:, 1] = 200
print(t[:,1])       # tensor([200., 200.])

# 마스크 배열을 상요해서 특정 조건의 요소만 치환
t[t > 10] = 20
print(t[t>10])      # 0tensor([20., 20.])


# 마스크 배열
# 마스크 배열이란 원 배열과 크기는 같으면서 각 요소가 True/False로 설정돼 있는 배열을 가리킴(마스킹)
# 예를 들어 , a = [1, 2, 3]라는 배열에서 a > 2를 실행하면 [False, False, True]라는 마스크 배열이 생성됨
