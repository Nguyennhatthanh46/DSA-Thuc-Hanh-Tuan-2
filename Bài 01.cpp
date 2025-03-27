/*
Cho một tập N điểm (x,y, z) trên không gian 3 chiều Oxyz. 
Bạn hãy sắp xếp và in ra các điểm tăng dần theo x, nếu x bằng nhau thì sắp xếp các điểm giảm dần theo y, nếu y bằng nhau thì sắp xếp các điểm tăng dần theo z.

Input: 
-Dòng đầu tiên chứa số nguyên N(1 <= N <= 10^6) là số lượng điểm trên không gian 3 chiều.
-N dòng tiếp theo gồm 3 số nguyên x,y,z (−10^9≤x,y,z≤10^9) là toạ độ của các điểm trên không gian 3 chiều.

Output:   Các điểm đã được sắp xếp , mỗi điểm được in trên một hàng.
Ví dụ:
Input                        Output
--------------------------------------------------
8
1 2 1                         0 1 -1
1 3 2                         0 0 0
2 4 3                         1 3 2
2 4 1                         1 2 1
4 1 -1                        2 4 1
0 1 -1                        2 4 3
0 0 0                         4 1 -1
4 1 2                         4 1  2 

*/

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y, z;
};

bool operator < (Point &a, Point &b) {
    if (a.x != b.x) return a.x < b.x;
    if (a.y != b.y) return a.y > b.y;
    return a.z < b.z;
}


void QuickSort(Point a[], int b, int e) {
    int dem = 0;
    if (b >= e) return;

    Point x = a[b];
    int i = b, j = e;

    while (i <= j) {
        while (a[i] < x) i++;
        while (x < a[j]) j--;

        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }

if(b<j) QuickSort(a, b, j);
if(i<e) QuickSort(a, i, e);
}

int main() {
    int n;
    cin >> n;
    Point a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y>>a[i].z;
    }

    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i].x << " " << a[i].y <<" "<<a[i].z<< "\n";
    }
}
