#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    long long n;
    cin>>n;
    string t= to_string(n);
    if(n==9){
        cout<<9<<endl;
        return 0;
    }
    for(int i =0;i<t.size();i++){
        int tn = t[i] - '0';
        int tn9 = 9-tn;
        if(i==0 && tn ==9)continue;
        if( tn9 < tn){
            char ch = tn9 + '0';
            t[i]=ch;
        }
    }
    long long ans = stoll(t);
    cout<<ans<<endl;
    return 0;
}
