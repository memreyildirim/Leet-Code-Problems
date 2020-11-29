"""

Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

"""

class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_x = str(x)
        start = 0
        end = len(str_x)-1
        
        while start<end:
            if str_x[end] != str_x[start]:
                return False
            else:
                start+=1
                end-=1
        return True
   
############################################

#Another and more effective soultion

class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_x = str(x)
        rev = str_x[::-1]
        return str_x==rev
                     
