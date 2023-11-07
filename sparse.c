// SPVM, only muliply non zeroes in vector multiplication

typedef struct {
  int n, nnz;
  int *rows;
  int *cols;
  double *vals;
} sparse_matrix_t;

void spvm(sparse_matrix_t *A, double *x, double *y) {
  for (int i = 0; i < A->n; i++) {
    y[i] = 0;
    for (int k = A->rows[i]; k < A->rows[i + 1]; k++) {
      int j = A->cols[k];
      y[i] += A->vals[k] * x[j];
    }
  }
}
