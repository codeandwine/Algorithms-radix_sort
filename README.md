# Algorithms-radix_sort
## Introduction 
Radix is a mathematical word that means the base of a number. In another words, our base ten number system has a Radix of 10. Similarly, our computer binary number system has a Radix of 2. Thus, the Radix sorting algorithm has to do with these concepts. This algorithm sorts integers by their radix, or digits, and runs another sort underneath to complete its purpose. 

## Stable 
To make this algorithm stable radix sort will implement another sort inside to ensure that K[j] element comes before a K[i] element, if and only if, K[j] is less than that of K[i]. We are aware that if at some point these two are equivalent, then the preceding one, K[i], should come first before K[j]. Thus to ensure this stability a counting sort or bucket sort can be implemented in the Radix sort. This then, guarantees a stable output. We see the code for this in ...

## Unstable
Radix algorithm becomes unstable if the indices compared have no way of telling which one, K[i] or K[j], to come first given they are equivalent. This can cause an uncertainty in outputs. We see here:

## Discussion
Overall, it is better to stabilize the Radix sort to be able to know the order of how inputs will be ordered in the output. We discuss here the complexity and see in which scenarios using a second algorithm in Radix helps to stabilize and improve performance. 

## Conclusion
After going over both instances of Radix Sort and applying algorithms to stabilize it, it is concluded that ...
