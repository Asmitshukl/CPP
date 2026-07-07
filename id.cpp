#include <iostream>
#include<string>
#include<vector>
typedef long long ll;
using namespace std;

bool check(vector<ll>&a, vector<ll>&b, ll c, ll k){
    int n = a.size();
    for(int i = 0; i < n; i++){
        ll ai = c * a[i];
        if(b[i] - ai < 0){
            ll l = b[i] - ai;
            if(k + l >= 0){
                k = k + l;
            } else {
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    ll k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<ll> b(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    ll s = 0, e = 2000;
    while(s <= e){
        ll mid = s + (e - s) / 2;
        if(check(a, b, mid, k)){
            s = mid + 1;
        } else {
            e = mid - 1;
        }
    }
    cout << e << endl;
    return 0;
}
