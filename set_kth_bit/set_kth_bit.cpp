// problem link: https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?page=1&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions


//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    int setKthBit(int N, int K)
    {
        int ans= N|(1<<(K));
      return ans;
    }
};




//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        
        Solution ob;
        int ans = ob.setKthBit(N,K);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends