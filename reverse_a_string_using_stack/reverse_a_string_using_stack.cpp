// problem link: https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1?page=1&status[]=unsolved&category[]=Strings&sortBy=submissions

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        for(int i=0;i<len;i++)
        {
            cout<<ch[i];
        }
        cout<<endl;
    }
        return 0;
}


// } Driver Code Ends


//return the address of the string
char* reverse(char *S, int len)
{
    stack<char>a;
    for(int i=0;i<len;i++)
    {
        a.push(S[i]);
    }
    
    for(int i=0;i<len;i++)
    {
        S[i]=a.top();
        a.pop();
    }
    return S;
}