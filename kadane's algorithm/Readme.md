<!-- // problem link: https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1  -->

# question discripton : Given an array Arr[] of N integers. Find the contiguous sub-array(containing at least one number) which has the maximum sum and return its sum.

eg:
input:
N = 5
Arr[] = {1,2,3,-2,5}
output: 9

      Input:
      N = 4
      Arr[] = {-1,-2,-3,-4}
     Output:-1

# logic:

            we will add every value in a variable sum and make a variable maxsum.
            if(sum>maxsum) then we will make maxsum as sum and if sum becomes negative then we will update it as 0;
