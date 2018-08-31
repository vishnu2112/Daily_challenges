#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define MOD 1000000000
int main(){
    string s;
    cin >> s;
    ll low = 0;
    ll high = s.size() - 1;
    ll diff = 0;
    while (low < high){
        if (s[low] != s[high]){
            diff++;
        }
        low++;
        high--;
    }
    if (diff > 1){
        cout << "NO" << endl;
    }
    else{
        if (diff == 0 && s.size()%2 == 0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}
