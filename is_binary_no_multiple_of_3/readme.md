<!-- problem link: https://practice.geeksforgeeks.org/problems/is-binary-number-multiple-of-30654/1?page=1&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions -->

# question discripton : we have to check weather the decimal value of given binary is multiple of 3 or not.
if its multiple of 3 then we will print 1 else we will print 0;

eg: input: s={0 1 1}
    output=1;

    input={1 0 0}
    output=0;

# logic: 
   Get count of all set bits at odd positions .
   Get count of all set bits at even positions .
   If the difference between the above two counts is a multiple of 3 then the number is also a multiple of 3.
