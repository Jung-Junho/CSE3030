/*
 * absVal(x): return the absolute value of x.
 * - Assume that INT_MIN (-2^31) is not provided as an input.
 * - Ex) absVal(2) = 2, absVal(-1) = 1
 */
int absVal(int x) {
    int check;

    check = x >> 31 << 31 >> 31; // x가 양수일 경우 0, 음수일 경우 -1(1111...1111)
    return (~check & x) | (check & (~x + 1));
}
