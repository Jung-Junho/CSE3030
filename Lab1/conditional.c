/*
 * conditional(x, y, z): Return z if x is 0, return y otherwise.
 * - Ex) conditional(2, 4, 5) = 4, conditional(0, 1, 2) = 2
 */
int conditional(int x, int y, int z) {
    int check = !x<<31>>31; // x = 0 일 경우 -1(1111....1111), 아닐 경우 0
    return (y&(~check))|(z&check);
}
