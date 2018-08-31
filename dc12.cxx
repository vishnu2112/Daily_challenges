#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define MOD 1000000000
int main(){
  ll n;
    cin >> n;
    if (n == 1){
        cout << "a" << endl;
    }
    else if (n == 2){
        cout << "ab" << endl;
    }
    else{
        string ans = "ab";
        for (ll i=2;i<n;i++){
            if (ans[i-2] == 'a'){
                ans += 'b';
            }
            else{
                ans += 'a';
            }
        }
        cout << ans << endl;
	}
}
