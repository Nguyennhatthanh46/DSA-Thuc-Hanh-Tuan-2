/*
Một trong những thuật toán sắp xếp cơ bản nhất đó chính là thuật toán tìm kiếm nổi bọt (bubble sort). 
Ý tưởng của thuật toán nổi bọt (trong minh họa này là tăng dần) rất đơn giản. 
Cụ thể, cứ mỗi hai phần tử kề nhau sẽ được hoán chỗ (swap) nếu phần tử bên trái lớn hơn phần tử bên phải.

Yêu cầu: Hãy cài đặt thuật toán tìm kiếm nổi bọt để sắp xếp lại mảng có N phần tử.
Trong lúc chạy thuật toán, nếu xảy ra hành động swap, hãy in ra mảng sau hành động swap đó. Bằng cách này, các bạn có thể hình dung được cách hoạt động của thuật toán sắp xếp.

Input:
-Dòng đầu tiên là số nguyên N dương (0 < N < 200)
-Dòng tiếp theo chứa N số nguyên Ai là các phần tử của mảng

Output:
Các dòng tiếp theo in ra cấu hình của mảng A mỗi lần mảng A xảy ra hành động swap.

Ví dụ:
Input                       
--------------------------------------------------
4
49920 15837 14483 3601

Output
--------------------------------------------------
15837 49920 14483 3601 
15837 14483 49920 3601 
15837 14483 3601 49920 
14483 15837 3601 49920 
14483 3601 15837 49920 
3601 14483 15837 49920 

*/

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int a[], int n){
int j;
for(int i = 0; i < n - 1; i++){
    for(int j = 0; j < n - i - 1; j++){
        if(a[j]>a[j+1]) {swap(a[j],a[j+1]);
        for(int i = 0; i < n;i++){
            cout<<a[i]<<" ";
        } cout<<'\n';
    }
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
bubbleSort(a,n);
}
