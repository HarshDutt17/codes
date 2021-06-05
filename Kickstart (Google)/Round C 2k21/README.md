Alien Generator:
Logic- We know, G= K + K+1 + K+2 ....... N1, so we can split this sum as follows,
S1 = sum of natural numbers till n2 (n2= K-1) <br>
S2 = sum of natural numbers till n1
so we get S2-S1 = G
on putting values of S1 and S2 it can be simplified as follows:
 =>>  n1(n1 + 1 ) - n2(n2 + 1) = 2*G
 =>>  sq(n1) - sq(n2) + n1 - n2 = 2*G
 =>>  (n1-n2)(n1 + n2 + 1) = 2*G     -------- (1)
 Here 2*G can be written as another variable G' for simplification.
 Now G' can always be written as G' = a*b , 
 so assuming a = n1 - n2 and b = n1 + n2 + 1
 on solving these equation we get
 n1 = (a + b - 1) /2
 n2 = (b - a - 1) /2
 for both n1 and n2 be integer a + b and a-b should be odd, which means a and b should be either odd and even or vice versa.
 Hence we apply a loop for getting factors of G' and check if both the factor pair are not both even or both odd, and then we simply put the values of n1 and n2 in equation (1) and if all conditions apply we increase the counter by 1.


Smaller Strings:
Logic- We just use simple P&C and see how many pallindromes are possible, for the string to be pallindrome , we just check the left part, as we know the right part has to be the same, so we go one every index of the string (till the middle one) and see how many lexicographically characters are available for that positon and multiply it with the possible next characters. We use modular exponentiation to avoid TLE during the calculation part.  Just a simple Dry Run would help you to understand the concept.
