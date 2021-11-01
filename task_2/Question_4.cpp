#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
    while (t--){
        int n;
        cin >> n;
        int m=n*n,b;
        b=m;
        vector<char> v;
        while(b){
            v.push_back((char)((b%10)+48));
            // cout << (char)(b%10+48);
            b/=10;
        }

        int s=v.size(),a=0,c=0;
        a+=(int)(v[s/2-1])-48;
        for(int i=s/2-2;i>=0;i--){
            a*=10;
            a+=(int)(v[i])-48;
        }
        // cout << a;
        c+=(int)(v[s-1])-48;
        for(int i=s-2;i>s/2-1;i--){
            c*=10;
            c+=(int)(v[i])-48;
        }
        // cout <<c<< " " << a;


        if(a+c==n){
            cout<<"ChefNumber";
            return;
        }
        a=0;
        c=0;
        a+=(int)(v[s/2])-48;
        for(int i=s/2-1;i>=0;i--){
            a*=10;
            a+=(int)(v[i])-48;
        }
        c+=(int)(v[s-1])-48;
        for(int i=s-2;i>s/2;i--){
            c*=10;
            c+=(int)(v[i])-48;
        }
        if(a+c==n){
            cout<<"ChefNumber";
            return;
        }
        // cout <<c << " " << a;
        cout << "Not ChefNumber";
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
