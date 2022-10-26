<!-- problem link: https://practice.geeksforgeeks.org/problems/set-kth-bit3724/1?page=1&status[]=unsolved&category[]=Bit%20Magic&sortBy=submissions -->


# question description : 
Given a number N and a value K. From the right, set the Kth bit in the binary representation of N. The position of Least Significant Bit(or last bit) is 0, the second last bit is 1 and so on. 

Example 1:

Input:
N = 10 
K = 2
Output:
14
Explanation:
Binary representation of the given number
10 is: 1 0 1 0, number of bits in the 
binary reprsentation is 4. Thus 2nd bit
from right is 0. The number after changing
this bit to 1 is: 14(1 1 1 0).
Example 2:

Input:
N = 15 
K = 3
Output:
15
Explanation:
The binary representation of the given
number 15 is: 1 1 1 1, number of bits
in the binary representation is 4. Thus
3rd bit from the right is 1. The number
after changing this bit to 1 is
15(1 1 1 1).

# logic: 
wewill simply left shift 1 to the kth place and then do bitwise or with that number.