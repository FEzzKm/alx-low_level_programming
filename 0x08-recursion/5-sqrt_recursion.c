/**
 * _sqrt_recursion_wrapper - a wrapper that does the recursion bit
 *
 * @n : input number
 * @min: minimum number to guess
 * @max: maximum number to guess
 *
 * Return: square root of @n or -1
*/
int _sqrt_recursive(int n, int start, int end) {
    if (start <= end) {
        int mid = (start + end) / 2;
        int square = mid * mid;

        if (square == n)
            return mid;
        else if (square < n)
            return _sqrt_recursive(n, mid + 1, end);
        else
            return _sqrt_recursive(n, start, mid - 1);
    }

    return -1; // If no natural square root found, return -1.
}

int _sqrt_recursion(int n) {
    if (n < 0)
        return -1; // Negative numbers don't have a natural square root.

    return _sqrt_recursive(n, 0, n);
}
