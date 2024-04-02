/*
 * bitMask(x): Return a mask that has (32 - x) zeros followed by x ones.
 * - Assume 0 <= x <= 31
 * - Ex) bitMask(0) = 000...000 in binary = 0
 * - Ex) bitMask(31) = 011...111 in binary = 0x7fffffff
 */
int bitMask(int x) {
  int res = ~(1<<31); // res = 0111...1111
  res = res>>(31&(~x)); // res >> (31-x)

  return res;
}