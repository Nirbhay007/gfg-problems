# class Ex(Exception):
#     def __init__(self, msg):
#         Exception.__init__(self, msg+msg)
#         self.args = (msg,)


# try:
#     raise Ex('ex')
# except Ex as e:
#     print(e)

# except Exception as e:
#     print(e)
# class A:
#     def __init__(self, v):
#         self.__a = v+1


# a = A(0)
# print(a.__a)
from datetime import datetime

datetime1 = datetime(2019, 11, 27, 11, 27, 22)
datetime2 = datetime(2019, 11, 27, 0, 0, 0)

print(datetime1-datetime2)
