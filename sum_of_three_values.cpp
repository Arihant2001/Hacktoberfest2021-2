// O(n ^ 3) => O(n ^ 2)
 
#include<bits/stdc++.h>
using namespace std;
 
bool tripletSum(int v[],int n,int sum){
    vector<pair<int,int>>arr;
    for(int i=0;i<n;i++){
        arr.push_back({v[i],i});
    }
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-2;i++){
        int j=i+1;
        int k=n-1;
        while(j<k){
            if(arr[i].first+arr[j].first+arr[k].first==sum){
                cout<<(arr[i].second)+1<<" "<<(arr[j].second)+1<<" "<<(arr[k].second)+1;
                return true;
            }
            else if(arr[i].first+arr[j].first+arr[k].first<sum){
                j++;
            }
            else{
                k--;
            }
        }
    }
    cout<<"IMPOSSIBLE";
    return false;
}
 
int main(){
    int a,sum;
    cin>>a>>sum;
    int arr[a];
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
    tripletSum(arr,a,sum);
}