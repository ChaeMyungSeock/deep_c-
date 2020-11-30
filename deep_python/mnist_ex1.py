import numpy as np
import matplotlib.pyplot as plt
from keras.utils import  np_utils
import pandas as pd
from keras.datasets import mnist
from keras.preprocessing.image import ImageDataGenerator


(x_train, y_train), (x_test, y_test) = mnist.load_data()

print(x_train.shape)    # (60000, 28, 28) batch_size = 60000 28 * 28 이미지
print(x_test.shape)     # (10000, 28, 28) batch_size = 10000 28 * 28
print(y_train.shape)    # (60000,)  inputdim = 1
print(y_test.shape)     # (10000,)
# y_train = y_train.reshape(y_train[0],1)
print(x_train.shape[0])
print(x_train.__class__)
x_train = x_train / 255
x_test = x_test / 255

# x_train = x_train.reshape(-1,28,28,1)
# x_test = x_test.reshape(-1,28,28,1)


x_train = x_train.reshape((x_train.shape[0], x_train.shape[1]*x_train.shape[2]*1))
x_test = x_test.reshape((x_test.shape[0], x_test.shape[1]*x_test.shape[2]*1))

y_train = np_utils.to_categorical(y_train)
y_test= np_utils.to_categorical(y_test)
print('y_train : ', y_train.shape)

print(x_train.shape)    
print(x_test.shape)     
# plt.imshow(x_train[0], 'gray')
# plt.imshow(x_train[0])
# plt.show()


from keras.models import Sequential, Input,Model
from keras.layers import Dense, LSTM, Flatten, Conv2D,MaxPool2D
from keras.layers import Dropout

# 2. 모델

input2 = Input(shape = (784,))
dense = Dense(100)(input2)
output2 = Dense(10, activation='softmax')(dense)
# model.add(Dense(10))
model = Model(input = input2, output = output2)

model.summary()

# 3. 훈련
from keras.callbacks import EarlyStopping
model.compile(optimizer='rmsprop', loss = 'binary_crossentropy', metrics=['acc'])
earlystopping = EarlyStopping(monitor='loss',patience=10, mode='min')
model.fit(x_train, y_train, batch_size=100, epochs=2, validation_split=0.1, callbacks=[earlystopping])

# 4. 평가 예측

loss, acc = model.evaluate(x_train, y_train)

print(len(model.layers[1].get_weights()))
print(model.layers[2].get_weights())