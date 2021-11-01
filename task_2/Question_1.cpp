#include <bits/stdc++.h>
#include <algorithm>
#define ll long long

using namespace std;

void solve(int t){
	while (t--){
		int n;
		cin >> n;
		vector<string> v;
		string s;
		for(int i=0;i<n;i++){
			cin >> s;
			v.push_back(s);
		}
		unordered_map<char,int> u;
		for(int i=0;i<n;i++){
			if(v[i].size()>=4){
				u[v[i][3]]=i+1;
			}
			else{
				u[v[i][v[i].size()-1]]=i+1;
			}
		}
		for(int i=0;i<26;i++){
			if(u[((char)(97+i))]!=0){
				cout<<v[u[((char)(97+i))]-1]<<"\n";
			}
			//cout << u[(char)(97+i)] <<"\n";
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
