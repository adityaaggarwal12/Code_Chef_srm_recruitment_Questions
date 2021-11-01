#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int count=0;
        for(int i=0;i<26;i+=2){
            if(count%2==0){
                cout<<char(65+i)<<"\n";
            }
            else{
                cout << char(97+i) << "\n";
            }
            count++;
        }
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    solve(t);
    return 0;
}
