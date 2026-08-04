#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr={1,5,6,7,8,12,13,20,60,400};
    int target=12;
    int s=0;
    int e=arr.size()-1;
    while(s<e){
        int mid =(s+e)/2;
        if(arr[mid]==target){
            cout<<"Target found in the arr at index:"<<mid<<endl;
            break;
        }
        else if(arr[mid]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }


}
