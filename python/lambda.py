from functools import reduce
# There are a bunch of lambda functions that can be used on lists
# * Filtering data 
x = list(filter(lambda x: x > 100, [-5, 200, 100, 150]))
print(x)

# Data transformation: The map() function can be used for data transformation:
x = list(map(lambda x: x ** 2, [11,11,11,11,11]))
print(x)

## Data aggregation: The reduce() function can be used, which recursively runs a function to pairs of values on each element of the list:
def doSum(x1, x2):
    return x1 + x2

x = reduce(doSum, [100,200,33,100])
print(x)
