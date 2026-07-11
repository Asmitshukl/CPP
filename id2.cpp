#include <iostream>
#include <vector>
//water taps codeforces 40
bool  msol(vector<int>a,vector<int>b,int res,int ){

    //base case




}

int main(){

    int n , t;
    cin>>n>>t;
    vector<int>a(n);
    vector<int>t(n);

    int e  = 0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        e += a[i];
    }
    for(int i=0;i<n;i++){
        cin>>t[i];
    }

    int s=0;
    while(s<=e){
        int mid = s+ (e-s)/2;
        if(msol(a,b,mid)){
            s=mid+1;
        }
        else{
            e = mid-1;
        }
    }
    cout<<e<<endl;
    return 0;

}

//i was thinking i will find the number like direct result and then will check if it is possible to actuallyy
//achieve that is the right answer but iam completely wrong for now
