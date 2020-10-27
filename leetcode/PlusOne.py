class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        
        carry = 1
        i = len(digits) - 1
        
        while i > -1 and carry:
            digits[i] += carry
            if digits[i] > 9:
                digits[i] = 0
            else:
                carry = 0
                
            i -= 1
            
        if i <= 0 and carry:
            digits.insert(0, 1)
        
        return digits
        
