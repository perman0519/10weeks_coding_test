#include <stdio.h>
#include <stdlib.h>

int n = 9;
int r = 7;
int inputs[9];
int picked[7];

int cmp(const void *a, const void *b) {
    int ia = *(const int *)a;
    int ib = *(const int *)b;
    return (ia > ib) - (ia < ib);
}

void print_and_exit(void) {
    for (int i = 0; i < r; i++) {
        printf("%d\n", picked[i]);
    }
    exit(0);
}

void combi(int start, int depth) {
    if (depth == r) {
        int sum = 0;
        for (int i = 0; i < r; i++) {
            sum += picked[i];
        }
        if (sum == 100) {
            print_and_exit();
        }
        return;
    }
    for (int i = start + 1; i < n; i++) {
        picked[depth] = inputs[i];
        combi(i, depth + 1);
    }
}

int main(void) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputs[i]);
    }
    qsort(inputs, n, sizeof(int), cmp);
    combi(-1, 0);
    return 0;
}
