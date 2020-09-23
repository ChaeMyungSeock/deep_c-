class Soynet():
    def __init__(self, a,b):
        self.a = a ## self == Soynet
        self.b = b
    # 세팅해주는 함수

    def add(self):
        return self.a + self.b

    def multiply(self):
        return self.a * self.b
    
    def square(self, x):
        return (self.a)**x
s = Soynet(3, 4)

print(s.a)

print(s.b)

print(s.add())

print(s.multiply())

print(s.square(2))
## model.fit() ---> model class ---> fit function
