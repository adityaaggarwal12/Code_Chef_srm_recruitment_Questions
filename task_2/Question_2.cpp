#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int k;
        cin>>k;
        //sorting the array
        sort(arr,arr+n);
        cout << k << " th element is " << arr[k-1] << "\n";
        //checking if kth elementis prime
        for(int i=2;i<=arr[k-1]/2;i++){
            if(arr[k-1]%i==0){
                cout  << k<< " th element is not prime";
                return ;
            }
        }
        cout  << k<< " th element is prime";

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
