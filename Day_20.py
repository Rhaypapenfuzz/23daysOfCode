class Solution:
    def reverseStr(self, mystring, rotation_const):
        
        #:type mystring: str
        #:type rotational_const: int
        #:rtype: str

        if rotation_const == 0:
          return ""

        start = rotation_const - 1
        end = 0
        mystr = ""
        mystr += mystring[rotation_const-1::-1]

        for char in range(0, int( len(mystring) / rotation_const)):

            mystr += mystring[start:end-1:-1] #reverse and concatenate
            mystr += mystring[end+rotation_const:start + rotation_const + 1] #concatenate un-reversed section of string
            start += rotation_const * 2 #change start and end index based on rotation_const
            end += rotation_const * 2

        print(mystr)
   
use_class = Solution()
use_class.reverseStr("BAGOOwxyzzEDRIIwxyzzDADEEwxx",5)
