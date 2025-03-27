/*
Bài toán: Thuật toán sắp xếp chọn

Thuật toán selection sort cũng là một trong những thuật toán đơn giản.
Yêu cầu: Hãy cài đặt thuật toán sắp selection sort để sắp xếp lại tăng dần mảng có N phần tử. 
Trong lúc chạy thuật toán, nếu xảy ra hành động swap, hãy in ra mảng sau hành động swap đó. 
Bằng cách này, các bạn có thể hình dung được cách hoạt động của thuật toán sắp xếp.

Input:
-Dòng đầu tiên là số nguyên N dương (0 < N < 200)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng

Output:

Các dòng tiếp theo in ra cấu hình của mảng A mỗi lần mảng A xảy ra hành động swap.

Ví dụ:
Input                       
--------------------------------------------------
6
95303 90219 78622 71136 38905 23466

Output
--------------------------------------------------
23466 90219 78622 71136 38905 95303

23466 38905 78622 71136 90219 95303 

23466 38905 71136 78622 90219 95303

*/

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int a[],int n){
int min, i,j,t;
for(int i = 0; i < n - 1; i++){
    min = i;
    for(int j = i + 1; j < n; j++){
        if(a[j]<a[min]) min = j;
    }
    swap(a[i],a[min]);
    if(a[min]!=a[i]){
        for(int i = 0; i < n; i++){
            cout<<a[i]<<" ";
        } cout<<'\n';
    }
}
}

int main(){
int n;
cin>>n;
int a[n];
for(int i = 0; i <n;i++){
    cin>>a[i];
}
selectionSort(a,n);
}
