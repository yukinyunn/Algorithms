#include <iostream>
#include <vector>
using namespace std;

// 配列の要素を順番に出力
void trace(vector<int> A, int N) {
  int i;
  for(i=0; i<N; i++) {
    if(i > 0) cout << " ";
    cout << A.at(i);
  }
  cout << endl;
}

// 挿入ソート (0オリジン配列)
void insertionSort(vector<int> A, int N) {
  int j, i, v;
  for(i=1; i<N; i++) {
    v = A.at(i);
    j = i - 1;
    while (j >= 0 && A[j] > v) {
      A.at(j+1) = A.at(j);
      j--;
    }
    A[j+1] = v;
    trace(A, N);
  }
}

int main() {
  int N, i, j;
  vector<int> A(100);

  cin >> N;
  for(i=0; i<N; i++) cin >> A.at(i);

  trace(A, N);
  insertionSort(A, N);
}