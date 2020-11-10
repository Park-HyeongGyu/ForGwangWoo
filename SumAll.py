import time

def main():
    start = time.time()
    a = int(input("input number : "))
    print("this is list :", GetPrimeNumber(a))
    end = time.time() - start
    print("this is time required : ", end)

def SumAllLoop(num):
    result = 0
    while num > 0:
        result += num
        num -= 1
    return result

def SumAllRecursion(num):
    if num == 1:
        return 1
    else:
        return num + SumAllRecursion(num-1)

def GetPrimeNumber(num):
    for_return = [1]
    count = 2
    while count <= num:
        if Modulation(count) == 1:
            for_return.append(count)
        count += 1
    return for_return

def Modulation(num):
    count = 2
    while count < num:
        if num % count == 0:
            return 0
        count += 1
    return 1

if __name__=="__main__":
     main()