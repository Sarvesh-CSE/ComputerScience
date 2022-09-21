In formating this document, take help of below tutorial.
https://medium.com/analytics-vidhya/how-to-create-a-readme-md-file-8fb2e8ce24e3



1. Given relations r(w, x) and s(y, z), the result of 
select distinct w, x 
from r, s 
is guaranteed to be same as r, provided (GATE CS 2000) 
(a) r has no duplicates and s is non-empty 
(b) r and s have no duplicates 
(c) s has no duplicates and r is non-empty 
(d) r and s have the same number of tuples 

2. Given the following relation instance. 
x  y  z
1  4  2
1  5  3
1  6  3
3  2  2 
Which of the following functional dependencies are satisfied by the instance? (GATE CS 2000) 
(a) XY -> Z and Z -> Y 
(b) YZ -> X and Y -> Z 
(c) YZ -> X and X -> Z 
(d) XZ -> Y and Y -> X 

3. Consider a schema R(A, B, C, D) and functional dependencies A -> B and C -> D. Then the decomposition of R into R1 (A, B) and R2(C, D) is (GATE CS 2001) 
a) dependency preserving and loss less join 
b) loss less join but not dependency preserving 
c) dependency preserving but not loss less join 
d) not dependency preserving and not loss less join 

![image](https://user-images.githubusercontent.com/37449436/191440345-a796a38f-1798-4a2c-8c32-0ab6e90a8b09.png)



Claim: A×B=∅ iff A=∅ or B=∅

Proof: If A=∅ or B=∅, then there is no (a,b) such that a∈A and b∈B. Therefore A×B, which is the set of these pairs, is empty.

If A≠∅ and B≠∅, there exists a∈A and b∈B, thus (a,b)∈A×B. Therefore A×B≠∅.
