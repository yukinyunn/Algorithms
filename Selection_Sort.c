#include <stdio.h>

//選択ソート(0オリジン)
int selectionSort(int A[], int N) {
    int i, j, tmp, cnt=0, minj;
    for (i=0; i<N-1; i++) {
        minj = i;
        for (j=i; j<N; j++) {
            if(A[j] < A[minj]) minj = j;
        }
        tmp = A[i]; 
        A[i] = A[minj]; 
        A[minj] = tmp;
        if(i != minj) cnt++;
    }
    return cnt;
}

int main () {
    int A[100], N, i, cnt;

    scanf("%d", &N);
    for (i=0; i<N; i++) scanf("%d", &A[i]);

    cnt = selectionSort(A, N);

    for (i=0; i<N; i++) {
        if(i>0) printf(" ");
        printf("%d", A[i]);
    }
    printf("\n");
    printf("%d\n", cnt);

    return 0;
}