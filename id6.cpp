#include<iostream>
#include<vector>
#include<string>
#include<cmath>
#include<algorithm>

using namespace std;

bool check(char ch){
    if(ch == 'A' || ch == 'E' || ch== 'I' || ch== 'O' || ch== 'U' || ch=='Y' || ch== 'a' ||
            ch== 'e' || ch== 'i' || ch== 'o' || ch=='u' || ch=='y'
            ){
        return true;
    }
    return false;
}
int main(){
    string s;
    cin>>s;
    string ans;

    for(int i=0;i<s.size();i++){
        if(!check(s[i])){
            ans.push_back('.');
            ans.push_back(tolower(s[i]));
        }
    }
    cout<<ans<<endl;

    return 0;
}
