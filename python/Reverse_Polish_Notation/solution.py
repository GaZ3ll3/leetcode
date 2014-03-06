class Solution:
    # @param tokens, a list of string
    # @return an integer
    def evalRPN(self, tokens):
        stack = []
        for tok in tokens:
            if ((tok[0] == '-') and (len(tok) > 1)) or ((tok[0] >= "0") and (tok[0] <= "9" )):
                stack.append(int(tok))
                continue
            a = stack.pop()
            b = stack.pop()
            if (tok[0] == "+"):
                stack.append(b+a)
            if (tok[0] == "-"):
                stack.append(b-a)
            if (tok[0] == "*"):
                stack.append(b*a)
            if (tok[0] == "/"):
                stack.append(int(float(b)/float(a)))
                
        return stack[0]
