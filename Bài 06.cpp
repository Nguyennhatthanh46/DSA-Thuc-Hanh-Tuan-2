/*
Bài toán: Thuật toán sắp xếp chèn

Yêu cầu: Hãy cài đặt thuật toán sắp xếp chèn để sắp xếp lại tăng dần mảng có N phần tử.
Trong lúc chạy thuật toán, nếu xảy ra hành động swap (dời phần tử hoặc gán phần tử mới vào vị trí thích hợp), hãy in ra mảng sau hành động swap đó. 
Bằng cách này, các bạn có thể hình dung được cách hoạt động của thuật toán sắp xếp.

Input:
-Dòng đầu tiên là số nguyên N dương (0 < N < 200)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng

Output:
Các dòng tiếp theo in ra cấu hình của mảng A mỗi lần mảng A xảy ra hành động swap.

Ví dụ:
Input                       
--------------------------------------------------
4
83530 64425 48217 20995

Output
--------------------------------------------------
83530 83530 48217 20995 
64425 83530 48217 20995 
64425 83530 83530 20995 
64425 64425 83530 20995 
48217 64425 83530 20995 
48217 64425 83530 83530 
48217 64425 64425 83530 
48217 48217 64425 83530 
20995 48217 64425 83530

*/

#include <bits/stdc++.h>
using namespace std;

void insertionSort(int a[], int n){
for(int i = 1; i < n; i++){
    int e = a[i], j;
    for(j = i - 1;j>-1;j--){
        if(a[j] < e){
            break;
        }
        a[j+1] = a[j];
        for(int i = 0; i < n; i++ ){
            cout<<a[i]<<" ";
        } cout<<'\n';
    }
    a[j+1] = e;
        for(int i = 0; i < n; i++ ){
            cout<<a[i]<<" ";
        } cout<<'\n';
}
}

int main(){
int n;
cin>>n;
int a[n];
for(int i = 0; i <n;i++){
    cin>>a[i];
}
insertionSort(a,n);
}
