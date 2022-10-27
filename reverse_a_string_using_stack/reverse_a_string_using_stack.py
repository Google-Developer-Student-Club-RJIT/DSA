class Stack: 
    def __init__(self): 
        self.items = [] 
    def isEmpty(self): 
        return self.items == [] 
    def push(self,item): 
        self.items.append(item) 
        return self.items 
    def pop(self): 
        if self.items == []: 
            return 0 
        self.items.pop() 
    def peek(self): 
        if self.items == []: 
            return 0 
        return self.items[len(self.items) - 1] 
    def size(self): 
        return len(self.items) 
 
    def getStackItems(self): 
        return self.items 
 
def reverse(string): 
    stack = Stack() 
    ls = [] 
    newstr = "" 
    for i in string: 
        stack.push(i) 
    ls = stack.getStackItems() 
    for j in range(len(ls)): 
        newstr += ls.pop() 
    print(newstr) 

s = input("enter a string : ")
reverse(s) 