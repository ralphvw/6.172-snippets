// Cache previously seen variable
// Reduce expense of sqrt
double cached_A = 0.0;
double cached_B = 0.0;
double cached_C = 0.0;

double hypotenuse(double A, double B) {
  if (A == cached_A && B == cached_B) {
    return cached_C;
  }

  cached_A = A;
  cached_B = B;
  cached_C = sqrt(A * A + B * B);
  return cached_C;
}
