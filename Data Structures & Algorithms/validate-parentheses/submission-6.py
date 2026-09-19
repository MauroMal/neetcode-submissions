class Solution:
    def isValid(self, s: str) -> bool:
        keys = {
            "]" : "[",
            "}" : "{",
            ")" : "("
        }
        stack = []

        for i in s:
            if i in keys:
                if stack and stack[-1] == keys[i]:
                    stack.pop()
                else:
                    return False
            
            else:
                stack.append(i)
        return True if not stack else False