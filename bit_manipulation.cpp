// Bit Manipulation : Operating direcetly on bits.

// a = 5 = 101
// b = 10 = 1010

// AND(&)
// a = 0101 b = 1010
// a &b = 0000 = 0

// OR(|)
// a = 0101 b = 1010
// a | b = 1111 = 15

// XOR(^)
// a = 0101 b = 1010
// a ^ b = 1111 = 15

// NOT(~)
// a = 00000101(assume it is 8 bit value)
// ~a = 11111010

// Left Shif(<<)
// a = 101 = 5
// a << 1 = 1010 = 10
// a << 2 = 10100 = 20

// Right Shift(>>)
// a = 1010 = 10
// a >> 1 = 101 = 5
// a >> 2 = 10 = 2

// To check i th bit is set bit or not
// a = 1010 = 10
// (a & (1 << i)) != 0(set)
// (a & (1 << i)) == 0(unset)

// Set i th bit
// a = 1010 = 10
// a = a | (1 << i)

// Unset i th bit
// a = 1010 = 10
// a = a & ~(1 << i)

// Flip i th bit
// a = 1010 = 10
// a = a ^ (1 << i)

// Remove last set bit
// a = 1110 = 14
// a = a & (a - 1)

// Check power of 2
// a = 1010 = 10
// a && !(a & (a - 1)) != 0(power of 2)
// a && !(a & (a - 1)) == 0(not a power of 2)

// swap without extra variable
// a = 101 = 5,
// b = 1010 = 10
// a = a ^ b or a ^= b
// b = a ^ b or b ^= a
// a = a ^ b or a ^= b

// Count number of set bits
// a = 10101 count = 0
// while (a > 0) :
//     if (a & 1) : count++;
//     a = a >> 1
// Time complexity(No of bits)

// In c++ we have(__builtin_popcount(a))
// count = __builtin_popcount(a) = 3
