# problem link: https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1?page=1&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions



#User function Template for python3
class Solution:
    def isDivisible(self, s):
        # code here
        n = len(s)
        s1 = 0
        for i in range(0,n,2):
            s1 = s1 + int(s[i])
        s2 = 0
        for i in range(1,n,2):
            s2 = s2 + int(s[i])    
        if abs(s1-s2) % 3 == 0: return 1
        return 0


#{
 # Driver Code Starts
# Initial Template for Python 3
if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        s = input()
        ob = Solution()
        ans = ob.isDivisible(s)
        print(ans)
# } Driver Code Ends