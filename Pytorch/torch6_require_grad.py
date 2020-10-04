import torch

x = torch.randn(100, 3)

# 미분의 변수로 사용하는 경우는 requires_grad를 True로 설정
a = torch.tensor([1, 2, 3.], requires_grad=True)

# 계산을 통해 자동으로 계산 그래프가 구축된다
y = torch.mv(x,a)
o = y.sum()

# 미분을 실행
o.backward()

# 분석 답과 비교
print(a.grad != x.sum(0))

# x는 requires_grad가 False이므로 미분이 되지 않음
print(x.grad is None)   # True
