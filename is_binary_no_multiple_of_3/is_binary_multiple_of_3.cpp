// problem link: https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1?page=1&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	int isDivisible(string s){
	    int temp=0, count=0;
	    for(int i=0;i<s.length();i++)
	    {
	        if(i%2==0)
	        {if(s[i]=='1')
	            temp++; 
	        }
	        else
	        {if(s[i]=='1')
	            count++;
	    }
	    }
	    if(((temp-count))%3==0)
	    return 1;
	    else 
	    return 0;
	   
	}

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends