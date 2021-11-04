# The time complexity of stacks of the four operations is O(1)

class Stack:
    def __init__(self):
        self.items = []
    def isEmpty(self):
        return self.items == []
    def push(self, item):
        self.items.append(item)
    def pop(self):
        return self.items.pop()
    def peek(self):
        return self.items[len(self.items) - 1]
    def size(self):
        return len(self.items)
        

stack = Stack()
stack.push('Red')
stack.push('Blue')
stack.push('Green')
stack.push('White')

print(stack.isEmpty())
print(stack.items)

print("pop last element: " + stack.pop())
print(stack.size(), "Last element of the stack:" ,stack.peek())
print(stack.items)
