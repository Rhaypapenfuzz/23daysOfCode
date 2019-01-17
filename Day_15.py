class MinStack:

    def __init__(self):

       # initialize data structure

        self.items = []

    def push(self, x):

        # :type x: int
        # :rtype: void
        
        return self.items.append(x)      #push element onto stack
        

    def pop(self):

        # :rtype: void
        
        return self.items.pop()       #remove element from top of stack
        

    def top(self):
        
        # :rtype: int
        
        print(self.items)                #show all current values in items
        print("Top: ",self.items[-1])    #print top of stack
        return self.items[-1]
        

    def getMin(self):
        
        # :rtype: int
        
        print(self.items)
        print("Min: ", min(self.items))     #print minimum value in the stack
        return min(self.items)
        


#MinStack object instantiated and called:
obj = MinStack()
obj.push(2)
obj.push(-4)
obj.push(0)
obj.push(3)
obj.push(6)
obj.pop()
obj.top()
obj.getMin()
