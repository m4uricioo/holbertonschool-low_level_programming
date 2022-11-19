:
Working on bytes, or data types comprising of bytes like ints, floats, doubles or even data structures which stores large amount of bytes is normal for a programmer. In some cases, a programmer needs to go beyond this - that is to say that in a deeper level where the importance of bits is realized.

Operations with bits are used in Data compression (data is compressed by converting it from one representation to another, to reduce the space) ,Exclusive-Or Encryption (an algorithm to encrypt the data for safety issues). In order to encode, decode or compress files we have to extract the data at bit level. Bitwise Operations are faster and closer to the system and sometimes optimize the program to a good level.

We all know that 1 byte comprises of 8 bits and any integer or character can be represented using bits in computers, which we call its binary form(contains only 1 or 0) or in its base 2 form.
Example:
1) 14 = {1110 }2
= 1 * 23 + 1 * 22 + 1 * 21 + 0 * 20
= 14.

2) 20 = {10100 }2
= 1 * 24 + 0 * 23 + 1 * 22 + 0 * 21 + 0 * 20
= 20.

For characters, we use ASCII representation, which are in the form of integers which again can be represented using bits as explained above.

Bitwise Operators:

There are different bitwise operations used in the bit manipulation. These bit operations operate on the individual bits of the bit patterns. Bit operations are fast and can be used in optimizing time complexity. Some common bit operators are:

NOT ( ~ ): Bitwise NOT is an unary operator that flips the bits of the number i.e., if the ith bit is 0, it will change it to 1 and vice versa. Bitwise NOT is nothing but simply the one’s complement of a number. Lets take an example.
N = 5 = (101)2
~N = ~5 = ~(101)2 = (010)2 = 2

AND ( & ): Bitwise AND is a binary operator that operates on two equal-length bit patterns. If both bits in the compared position of the bit patterns are 1, the bit in the resulting bit pattern is 1, otherwise 0.
A = 5 = (101)2 , B = 3 = (011)2 A & B = (101)2 & (011)2= (001)2 = 1

OR ( | ): Bitwise OR is also a binary operator that operates on two equal-length bit patterns, similar to bitwise AND. If both bits in the compared position of the bit patterns are 0, the bit in the resulting bit pattern is 0, otherwise 1.
A = 5 = (101)2 , B = 3 = (011)2
A | B = (101)2 | (011)2 = (111)2 = 7

XOR ( ^ ): Bitwise XOR also takes two equal-length bit patterns. If both bits in the compared position of the bit patterns are 0 or 1, the bit in the resulting bit pattern is 0, otherwise 1.
A = 5 = (101)2 , B = 3 = (011)2
A ^ B = (101)2 ^ (011)2 = (110)2 = 6

Left Shift ( << ): Left shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the left and append 0 at the end. Left shift is equivalent to multiplying the bit pattern with  ( if we are shifting k bits ).
1 << 1 = 2 = 21
1 << 2 = 4 = 22 1 << 3 = 8 = 23
1 << 4 = 16 = 24
…
1 << n = 2n

Right Shift ( >> ): Right shift operator is a binary operator which shift the some number of bits, in the given bit pattern, to the right and append 1 at the end. Right shift is equivalent to dividing the bit pattern with 2k ( if we are shifting k bits ).
4 >> 1 = 2
6 >> 1 = 3
5 >> 1 = 2
16 >> 4 = 1

enter image description here

Bitwise operators are good for saving space and sometimes to cleverly remove dependencies.

Note: All left and right side taken in this article, are taken with reference to the reader.

Lets discuss some algorithms based on bitwise operations:

1) How to check if a given number is a power of 2 ?
Consider a number N and you need to find if N is a power of 2. Simple solution to this problem is to repeated divide N by 2 if N is even. If we end up with a 1 then N is power of 2, otherwise not. There are a special case also. If N = 0 then it is not a power of 2. Let’s code it.

Implementation:

 bool isPowerOfTwo(int x)
    {
        if(x == 0)
            return false;
        else
        {
            while(x % 2 == 0) x /= 2;
            return (x == 1);
            }
    }
Above function will return true if x is a power of 2, otherwise false.
Time complexity of the above code is O(logN).

The same problem can be solved using bit manipulation. Consider a number x that we need to check for being a power for 2. Now think about the binary representation of (x-1). (x-1) will have all the bits same as x, except for the rightmost 1 in x and all the bits to the right of the rightmost 1.
Let, x = 4 = (100)2
x - 1 = 3 = (011)2
Let, x = 6 = (110)2
x - 1 = 5 = (101)2

It might not seem obvious with these examples, but binary representation of (x-1) can be obtained by simply flipping all the bits to the right of rightmost 1 in x and also including the rightmost 1.

Now think about x & (x-1). x & (x-1) will have all the bits equal to the x except for the rightmost 1 in x.
Let, x = 4 = (100)2
x - 1 = 3 = (011)2
x & (x-1) = 4 & 3 = (100)2 & (011)2 = (000)2
Let, x = 6 = (110)2
x - 1 = 5 = (101)2
x & (x-1) = 6 & 5 = (110)2 & (101)2 = (100)2

Properties for numbers which are powers of 2, is that they have one and only one bit set in their binary representation. If the number is neither zero nor a power of two, it will have 1 in more than one place. So if x is a power of 2 then x & (x-1) will be 0.

Implementation:

  bool isPowerOfTwo(int x)
    {
        // x will check if x == 0 and !(x & (x - 1)) will check if x is a power of 2 or not
        return (x && !(x & (x - 1)));
    }
2) Count the number of ones in the binary representation of the given number.

The basic approach to evaluate the binary form of a number is to traverse on it and count the number of ones. But this approach takes log2N of time in every case.
