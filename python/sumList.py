def getSum(list):
    sum = 0
    for row in list:
        for item in row:
            sum += item
    return sum
a = ( getSum([[1,2],[3,4]]))
print(a)
