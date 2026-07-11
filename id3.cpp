#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int z=0;z<n;z++){
    int i,j;
    cin>>i>>j;

    vector<int>v(j+1,1);
    //n= sqrt(n);
    for(int p=2;p*p<=j;p++){
        if(v[p]==1){
            for(int k=p*p;k<=j;k+=p){
                v[k]=0;
            }
        }
    }
    for(int x = max(i,2);x<=j;x++){
        if(v[x]==1)
        cout<<x<<endl;
    }

    }
    return 0;
}
