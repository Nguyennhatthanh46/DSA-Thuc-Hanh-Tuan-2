/*
Bài toán: Thuật toán sắp xếp trộn

Tiếp theo, chúng ta sẽ thực hiện cài đặt thuật toán sắp xếp trộn (merge sort). Merge sort có độ phức tạp thời gian là O(nlog(n)), 
vì vậy nó được coi là một thuật toán hiệu quả hơn so với 3 thuật toán sắp xếp đã cài đặt trước đó. 
Merge sort là một thuật toán chia để trị (divide and conquer). Để minh họa cách hoạt động của nó, chúng ta sẽ cài đặt theo yêu cầu sau:

Yêu cầu: Dựa trên mã giả được cung cấp dưới đây, hãy cài đặt thuật toán sắp xếp trộn (merge sort) để sắp xếp lại một mảng có N phần tử. 
Trong quá trình chạy thuật toán, hãy in ra mảng A sau mỗi lần trộn hai mảng con.

Input:
-Dòng đầu tiên là số nguyên N dương (0 < N < 20)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng
Output:
Các dòng tiếp theo in ra cấu hình của mảng A.
Input                       
--------------------------------------------------
10
800 728 703 671 628 625 518 508 392 331

Output
--------------------------------------------------
[ 728 800 ] 703 671 628 625 518 508 392 331 
[ 703 728 800 ] 671 628 625 518 508 392 331 
703 728 800 [ 628 671 ] 625 518 508 392 331 
[ 628 671 703 728 800 ] 625 518 508 392 331 
628 671 703 728 800 [ 518 625 ] 508 392 331 
628 671 703 728 800 [ 508 518 625 ] 392 331 
628 671 703 728 800 508 518 625 [ 331 392 ] 
628 671 703 728 800 [ 331 392 508 518 625 ] 
[ 331 392 508 518 625 628 671 703 728 800 ] 

*/

#include <bits/stdc++.h>

using namespace std;
void output(int a[], int l, int r, int n) {
    for (int i = 0; i < l; i++) cout << a[i] << " ";
    cout << "[ ";
    for (int i = l; i <= r; i++) cout << a[i] << " ";
    cout << "] ";
    for (int i = r + 1; i < n; i++) cout << a[i] << " ";
    cout << endl;
}

void Merge(int a[], int l, int mid, int r, int n) {
    int n1 = mid - l + 1;
    int n2 = r - mid;
    vector<int> x(n1), y(n2);
    for (int i = 0; i < n1; i++) x[i] = a[l + i];
    for (int j = 0; j < n2; j++) y[j] = a[mid + 1 + j];
int i = 0, j = 0, idx = l;
    while (i < n1 && j < n2) {
        if (x[i] <= y[j]) a[idx++] = x[i++];
        else a[idx++] = y[j++];
    }
    while (i < n1) a[idx++] = x[i++];
    while (j < n2) a[idx++] = y[j++];
  output(a, l, r, n);
}

void MergeSort(int a[], int l, int r, int n) {
    if (l < r) {
        int mid = (l + r) / 2;
        MergeSort(a, l, mid, n);
        MergeSort(a, mid + 1, r, n);
        Merge(a, l, mid, r, n);
    }
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    MergeSort(a, 0, n - 1, n);
}
