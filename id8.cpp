#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
    int k;
    string s;
    cin >> k >> s;

    map<char,int> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }

    vector<string> res(k);
    for(auto x : mp){
        int t = x.second;
        if(t % k){
            cout << -1 << endl;
            return 0;
        } else {
            for(int i = 0; i < k; i++){
                string ts = string(t / k, x.first);
                res[i].append(ts);
            }
        }
    }

    string ans;
    for(int i = 0; i < k; i++){
        ans.append(res[i]);
    }

    cout << ans << endl;
    return 0;
}
