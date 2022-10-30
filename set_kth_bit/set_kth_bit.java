//User function Template for Java

class Solution{

    static int setKthBit(int N,int K){
        int a[]= new int[100];
        int i;
        int len=0;
        int new_bin=0;
        /* converts and store binary in array a in reversed order*/
        for(i=0;N>0;i++)    
        {    
            a[i]=N%2;    
            N=N/2; 
            len++;          //number of bits used in representation
        }   
        
        /* set Kth bit*/
        a[K]=1;       //Kth bit from right side in reversed order
        
        /*evaluating new number formed after Kth set bit*/
        for(i=0;i<len;i++)
        {
             new_bin+=a[i]*Math.pow(2,i);
        }
        
        return new_bin;
    }
}