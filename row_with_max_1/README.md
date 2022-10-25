<!-- # problem link: https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1?page=2&status[]=unsolved&category[]=Arrays&category[]=Recursion&sortBy=submissions -->

# question discripton : we have to find the which is having maximum number of 1.
note: each row  is sorted.

        eg:    arr[4][4];   2D array of size 4X4
        m=4,n=4;
                   arr[m][n] ={0 1 1 0
                               1 0 1 1
                               0 0 0 0
                               1 1 1 1}
                             
so we have having max 1's in last row which is row-4 .
so our output is 3(row index of that 4).

# logic: 
since each row is sorted so we have to check only first value of every row of column we will iterate through a loop and check whose first value is one (followed by second column and and so on...).if its first value is one then all the upcoming values in that row will be 1.

in case of no row having 1 we will print -1;
and in case of multiple ans print the first one that occures.
