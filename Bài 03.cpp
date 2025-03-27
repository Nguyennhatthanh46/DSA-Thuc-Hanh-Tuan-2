/*
MEX (minimum excluded) là một giá trị được sử dụng phổ biến trong Lý thuyết Trò chơi. MEX được định nghĩa là số tự nhiên nhỏ nhất chưa xuất hiện trong mảng.

Ví dụ:
MEX([]) = 0.
MEX([0, 2, 3]) = 1
MEX([0, 1, 2, 3]) = 4.
Bạn hãy xác định MEX của một mảng cho trước?

Input: 
-Dòng đầu tiên chứa số nguyên N (1≤N≤10^5), là số lượng phần tử của mảng.
-Dòng tiếp theo chứa N số nguyên ai(0≤ai≤10^9) là các phần tử của mảng.
 
Ouput:
Một số nguyên là giá trị MEX của dãy được cho.
Input                        Output
--------------------------------------------------
6                            3
0 1 2 4 6 7

*/

#include <bits/stdc++.h>
using namespace std;

void heapify(int a[], int n, int i){
int l = 2*i+1;
int r = 2*i+2;
int L = i;
if(l<n&&a[l]>a[L]){
    L = l;
}
if(r<n&&a[r]>a[L]){
    L = r;
}
if(L != i){
    swap(a[i], a[L]);
    heapify(a,n,L);
}
}

void heapSort(int a[], int n){
for(int i = n/2-1;i>=0;i--){
    heapify(a,n,i);
}
for(int i = n -1; i>=0;i--){
    swap(a[i], a[0]);
    heapify(a,i,0);
}
}

int mang(int a[], int n){
int *b = new int[n + 1];
fill_n(b, n + 1, 0);
for(int i = 0; i <n;i++){
    if(a[i]<n){
    b[a[i]]++;
    }
}
for(int i = 0; i < n; i++){
    if(b[i]==0){
    delete[] b;
    return i;
    }
}
delete[] b;
return n;
}

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    heapSort(a,n);
cout<<mang(a,n);
}
