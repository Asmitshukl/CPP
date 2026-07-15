#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n*2;i++){
        int t = abs(n-i);
        int m = n-t;


        string s= string(2*t, ' ');

        for(int j=0 ; j<=m;j++){
            s.push_back(j+'0');
            s.push_back(' ');
        }

        for(int j=m-1 ; j >= 0 ; j--){
            s.push_back(j+'0');
             s.push_back(' ');
        }

        cout<<s<<endl;
    }


    return 0;
}
