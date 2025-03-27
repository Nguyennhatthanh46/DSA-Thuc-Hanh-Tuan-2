/*
Cho một tập N điểm (x,y) trên mặt phẳng Oxy. Bạn hãy sắp xếp và in ra các điểm tăng dần theo x, nếu x bằng nhau thì sắp xếp các điểm giảm dần theo y.

Input: 
-Dòng đầu tiên chứa số nguyên N (1 <= N <= 10^6) là số lượng điểm trên mặt phẳng.
-N dòng tiếp theo gồm 2 số nguyên x, y (−10^9≤x,y≤10^9) là toạ độ của các điểm trên mặt phẳng.

Output:  Các điểm đã được sắp xếp , mỗi điểm được in trên một hàng.

Ví dụ:
Input                        Output
--------------------------------------------------
5
1 2                              1 3               
1 3                              1 2
2 4                              2 9
2 9                              2 4
4 1                              4 1

*/

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

bool operator<(Point &a, Point &b) {
    if (a.x != b.x) return a.x < b.x;
    return a.y > b.y;
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
        cin >> a[i].x >> a[i].y;
    }

    QuickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << a[i].x << " " << a[i].y << "\n";
    }
}
