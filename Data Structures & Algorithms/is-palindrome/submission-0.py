class Solution:
    def cleanString(self,s: str) -> str:
        cleanStr = ""
        for i in s:
            if not i.isalnum():
                continue
            if 'A' <= i <= 'Z':
                i = chr(ord(i) | 32)
            cleanStr += i
        return cleanStr


    def isPalindrome(self, s: str) -> bool:
        s = self.cleanString(s)
        n = len(s)-1
        for i in range(len(s)):
            j = n-i
            if s[i] != s[j]:
                return False
        return True




        