#include <stdio.h>
#include <stdlib.h>

int main() {
  double pi;
  const double End =
      1.0 + (1.0 / (10.0 * 10.0 * 10.0 * 10.0 * 10.0 * 10.0 * 10.0 * 10.0 * 10.0));
  double N = 2.0;

  pi = 2.0 * ((N * N) / ((N - 1.0) * (N + 1.0)));

  while (pi > End) {

    N += 2.0;
    pi *= ((N * N) / ((N - 1.0) * (N + 1.0)));
  }
  printf("%lf", pi);

  return 0;
}
