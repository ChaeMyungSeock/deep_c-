import numpy as np
import torch

# 중첩 list를 지정
t = torch.tensor([[1, 2], [3, 4.]])

#  device를 지정하면 GPU에 텐서를 만들 수 있다.
t = torch.tensor([[1, 2], [3, 4.]], device = "cuda:0")

# dtype를 사용해 데이터형을 지정하여 텐서를 만들 수 있다.
t = torch.tensor([[1, 2], [3, 4.]], dtype = torch.float64)

# 0부터 9까지의 수치로 초기화된 1차원 텐서
t = torch.arange(0,10)

# 모든 값이 0인 100 x 10 텐서를
# 작성해서 to 메서드로 GPU에 전송
t = torch.zeros(100, 10).to("cuda:0")

# 정규 난수로 100 x 10의 텐서를 작성
t = torch.randn(100, 10)

# 텐서의 shape은 size 메서드로 확인 가능
print(t.size())

# numpy 메서드를 사용해 ndarry로 변환
t = torch.tensor([[1, 2], [3, 4.]])
x = t.numpy()

# GPU상의 tensor는 to 메서드로,
# CPU의 텐서로 이동(변환)할 필요가 있다.
t = torch.tensor([[1, 2], [3, 4.]], device="cuda:0")
x = t.to("cpu").numpy()

