#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    map<string,long long int>m;
    while (n--){
        string s;
        cin >> s;
        if (m.find(s) == m.end()){
            m[s] = 0;
            cout << "OK" << endl;
        }
        else{
            cout << s << m[s] + 1 << endl;
            m[s] = m[s] + 1;
        }
    }
    return 0;
}
