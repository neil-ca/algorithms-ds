def searchBinary(myList, item):
    first = 0
    last = len(myList)-1 
    foundFlag = False
    while (first <= last and not foundFlag):
        mid = (first + last)//2
        if myList[mid] == item :   
            foundFlag = True
        else:
            if item < myList[mid]:
                last = mid - 1
            else:
                first = mid + 1
        return foundFlag

print(searchBinary([8,9,10,100,1000], 10))
print(searchBinary([8,9,10,100,1000], 2))
print(searchBinary([1,2,3], 2))
print(searchBinary([1,2,3], 4))
print(searchBinary([10,20,30, 40], 10))
