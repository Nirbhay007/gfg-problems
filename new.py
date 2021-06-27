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


def persistence(n):  # 39
    # your code
    count = 0
    if((n//10) == 0):
        return count
    while(n):
        mul = 1
        while(n):
            last = n % 10  # 9
            mul *= last  # 27
            n = n//10  # 0

        n = mul  # 27

        count += 1
        if(n//10 == 0):
            break
    return count


print(persistence(39))
