#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
sort(a,a+n);
vector<pair<int,int>> kq;
int minDiff = INT_MAX;
int l = 0, r = 1;
while(r <n){
    int x = a[r] - a[l];
if(x<minDiff){
    minDiff = x;
    kq.clear();
    kq.push_back({a[l],a[r]});
}
else if(x==minDiff){
    kq.push_back({a[l],a[r]});
}
l++;
r++;
}

for(auto x : kq){
    cout<<x.first<<" "<<x.second<<" ";
}
}
