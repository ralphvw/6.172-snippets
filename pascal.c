// Precomputing pascal's triangle before choose

#define CHOOSE_SIZE 100
int choose[CHOOSE_SIZE][CHOOSE_SIZE];

void init_choose() {
  for (int n = 0; n < CHOOSE_SIZE; ++n) {
    choose[n][0] = 1;
    choose[n][n] = 1;
  }

  for (int n = 1; n < CHOOSE_SIZE; ++n) {
    choose[0][n] = 0;
    for (int k = 1; k < n; ++k) {
      choose[n][k] = choose[n - 1][k - 1] + choose[n - 1][k];
      choose[k][n] = 0;
    }
  }
}
