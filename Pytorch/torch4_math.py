import torch

# 100 x 10의 테스트 데이터 생성
x = torch.randn(100, 0)

# 수학 함수를 포함하는 수식
y = x * 2 + torch.abs(x)

# 평균치 구하기
m = torch.mean(x)

# 함수가 아닌 메서드로도 구할 수 있음
m = x.mean()

# 집계 결과는 0차원의 텐서로 item 메서드를 사용해서 값을 추출할 수 있음
m_value = m.item()

# 집계는 차원을 지정할 수도 있다. 다음은 행 방향으로 집계해서, 열 단위로 평균값을 계산한다.
m2 = x.mean(0)

'''
view : 텐서의 차원을 변경 ndarray의 reshape와 동일

cat, stack : 텐서를 결합 (cat은 다른 길이의 복수의 텐서를 하나로 묶을 때 사용)

t, transpose : 차원을 교환 (행렬의 전치 외에도 이미지 데이터의 데이터 형식을 HWC(높이, 너비, 색) -> CHW(색, 높이, 너비)순으로 변경할 때 사용)
'''

x1 = torch.tensor([[1,2], [3,4.]])          # 2x2
x2 = torch.tensor([[10,20,30], [40,50,60]]) # 2x3

# 2x2를 4x1로 보여준다
x1.view(4,1)

# -1은 표현할 수 있는 자동화된 값으로 대체되며, 한 번만 사용할 수 있다.
# 아래에선 -1을 사용하면 자동으로 4가 할당 됨
x1.view(1,-1)

# 2x3을 전치해서 3x2로 만든다
x2.t()

# dim=1로 결합하면 2x5의 텐서를 만든다  
torch.cat([x1, x2], dim=1)
'''
cat에서는 dim인자를 통해서 어느 차원을 늘릴지 결정 if dim=0을(default값)주게 되면 행의 차원이 늘어남, 여기서는 dim=1이므로 열이 늘어남
'''

# HWC을 CHW로 변환
# 64x32x3의 데이터가 100개
hwc_img_data = torch.rand(100, 64, 32, 3)
chw_img_data = hwc_img_data.transpose(1, 2).transpose(1, 3)
# 1,2번을 교환 그리고 1,3을 교환

