// Choosing k times from set of n items
int choose(int n, int k) {
  if (n < k)
    return 0;
  if (n == 0)
    return 1;
  if (k == 0)
    return 1;

  return choose(n - 1, k - 1) + choose(n - 1, k);
}
