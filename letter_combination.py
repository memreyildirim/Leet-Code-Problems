"""
Given a string containing digits from 2-9 inclusive, return all possible letter combinations that the number could represent. Return the answer in any order.

Example 1:

Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]
Example 2:

Input: digits = ""
Output: []
Example 3:

Input: digits = "2"
Output: ["a","b","c"]

"""

class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        import itertools
        dicti={2:"abc",3:"def",4:"ghi",5:"jkl",6:"mno",7:"pqrs",8:"tuv",9:"wxyz"}
        listt = []
        if digits!="":
            for i in range(len(digits)):
                listt.append(dicti[int(digits[i])])       
            c = list(itertools.product(*listt))
            res = list(map("".join, c)) 

            return res
        else:
            return digits
