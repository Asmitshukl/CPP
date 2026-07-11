#include<iostream>
#include<vector>
#include<string>
#include<cmath>

using namespace std;

int maxn = 5000001;
vector<int> spf(maxn);
vector<long long>f(maxn);

void sieve(){
    for(int i=2;i<maxn;i++){
        if(spf[i] == 0){
            for(long long j= i ; j< maxn ;j+=1){
                if(spf[j] == 0)spf[j] = i;
            }
        }
    }

    f[0] = f[1] =0;
    for(int n=2 ; n<maxn ;n++){
        int x = n; omega =0;
        while(x > 1){
            omega ++ ;

        }
    }
}


int main(){

    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a , b;
        cin>> a >> b;

        int ans=dp(n);
        cout<<ans<<endl;

    }

    return 0;
}
