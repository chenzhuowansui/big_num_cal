/**
 * @brief Maps an integer to its sign with zero preserved.
 *
 * @param a Input integer to evaluate.
 * @return int `1` if `a` > 0, `-1` if `a` < 0, otherwise the original value of `a` (zero).
 */
static int return_value(int a) {
  if(a > 0) {
    return 1;
  }

  if(a < 0) {
    return -1;
  }

  return a;
}