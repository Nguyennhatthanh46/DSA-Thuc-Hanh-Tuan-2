/*
Cho hai mảng đã có thứ tự, hãy trộn chúng thành một mảng cũng có thứ tự.

INPUT
-Dòng đầu tiên chứa số T (T < 10) là số test case.
-Mỗi test case có 3 hàng. Hàng đầu tiên chứa hai số n và m (n,m < 500.000) lần lượt là số phần tử của hai mảng A và B. 
Hàng thứ hai chứa n số nguyên được sắp theo thứ tự không giảm, đây chính là các phần tử của mảng A. 
Hàng cuối cùng chứ m số nguyên được sắp theo thứ tự không giảm, đây chính là các phần tử của mảng B.

OUTPUT
Ứng với mỗi test case, xuất ra trên một dòng mảng có thứ tự thu được bằng cách trộn hai mảng A và B.

VÍ DỤ
Input                        Output
--------------------------------------------------
1                            1 2 2 4 5 7 9 10 11

5 4

1 2 5 7 10

2 4 9 11

*/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

//###INSERT CODE HERE 
void merge(int a[],int n, int b[], int m, int c[]){
int i=0,j=0, k = 0;
while((i<n)&&(j<m)){
    if(a[i]<=b[j]){
        c[k++]=a[i];
        ++i;
    }else{
    c[k++]=b[j];
    ++j;
    }
}
while(i<n){
    c[k++]=a[i];
    ++i;
}
while(j<m){
    c[k++]=b[j];
    ++j;
}
}

int main (){
    cin.tie(0);
    std::ios::sync_with_stdio(false);
    int n, m;
    int t; cin >> t;
    while (cin >> n >> m || t > 0){ 
        t--;
        int *a = new int [n], *b = new int[m], *c = new int[n+m];
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < m; i++) cin >> b[i];

	merge(a, n, b, m, c);
	int nc = n + m;;
        for(int i = 0; i < nc; i++){
            cout << c[i] << " ";
        }
        delete c;
        cout << endl;
    }
}
