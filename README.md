USAGE
./palindrome -n number -p palindrome [-b base] [-imin i] [-imax i]
DESCRIPTION
-n n integer to be transformed (>=0)
-p pal palindromic number to be obtained (incompatible with the -n
option) (>=0)
if defined, all fitting values of n will be output
-b base base in which the procedure will be executed (1<b<=10) [def: 10]
-imin i minimum number of iterations, included (>=0) [def: 0]
-imax i maximum number of iterations, included (>=0) [def: 100]


A n-iteration turnover palindrome is a number which leads to a palindrome after n iterations of the following
procedure:
1. reverse the number,
2. add both the number and its reversal to obtain a new number,
3. iterate from the first step until you get a palindromic number

The goal of this project is to find iterated reversal palindromes, and the smallest number of iterations,
in order to get a palindromic number, given the constraints on this number of iterations.
