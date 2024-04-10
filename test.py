from ctypes import *
test = CDLL("./imgcov-py.dll")
test.imgset(bytes("1.png", encoding='utf-8'),bytes("2.png", encoding='utf-8'),bytes("3.png", encoding='utf-8'),557,278)