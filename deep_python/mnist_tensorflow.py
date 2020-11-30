from tensorflow.keras.models import Model
from tensorflow.keras.layers import Input, Conv2D, MaxPooling2D, Dense, Activation, Flatten, BatchNormalization
from tensorflow.keras.optimizers import Adam
from tensorflow.keras.datasets import mnist
from tensorflow.keras.utils import to_categorical
import tensorflow as tf
import numpy as np
gpus = tf.config.experimental.list_physical_devices('GPU')
if gpus:
  try:
    # Currently, memory growth needs to be the same across GPUs
    for gpu in gpus:
      tf.config.experimental.set_memory_growth(gpu, True)
    logical_gpus = tf.config.experimental.list_logical_devices('GPU')
    print(len(gpus), "Physical GPUs,", len(logical_gpus), "Logical GPUs")
  except RuntimeError as e:
    # Memory growth must be set before GPUs have been initialized
    print(e)
  
(X_train, y_train), (X_test, y_test) = mnist.load_data()

# reshaping X data: (n, 28, 28) => (n, 28, 28, 1)
X_train = X_train.reshape((X_train.shape[0], X_train.shape[1], X_train.shape[2], 1)).astype("float32") / 255.0
X_test = X_test.reshape((X_test.shape[0], X_test.shape[1], X_test.shape[2], 1)).astype("float32") / 255.0

# converting y data into categorical (one-hot encoding)
y_train = to_categorical(y_train)
y_test = to_categorical(y_test)

print("data ready")

def mnist_model():
    inputs = Input(shape=(28, 28, 1))
    # conv = Conv2D(filters=5, kernel_size=(5, 5), strides=(1, 1), padding="same", use_bias=True, name="conv")(inputs)
    ## BatchNormalization
    # maxpool = MaxPooling2D(pool_size=(2, 2), name="maxpool")(conv)
    # relu_maxpool = Activation('relu',name="relu_maxpool")(maxpool)
    flatten = Flatten(name="flatten")(inputs)
    dense1 = Dense(50, name="dense1")(flatten)
    relu_dense1 = Activation('relu', name="relu_dense1")(dense1)
    dense2 = Dense(10, name="dense2")(relu_dense1)
    outputs = Activation('softmax', name="result")(dense2)
    model = Model(inputs, outputs)

    return model


model = mnist_model()

model.summary()

optimizer = Adam(lr=0.001)

model.compile(loss='categorical_crossentropy', optimizer=optimizer, metrics=['accuracy'])

model.fit(X_train, y_train, batch_size=100, validation_data=(X_test, y_test), epochs=3)

print('finished')

print(len(model.get_weights()))

for i in range(1,len(model.get_weights())):
    a = model.layers[i].get_weights()
    a = np.array(a)
    np.save('C:/Users/CMS_John/Desktop/mnist_tensorflow/mnist_weight'+str(i),a)