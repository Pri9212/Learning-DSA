#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using  namespace std;
//code for searching an element in nearly sorted array
int binarysearch(vector<int>arr, int target){
    int s=0;
    int e=arr.size()-1;

    int mid =s +(e-s)/2;
    while(s<=e){
    if (arr[mid]==target){ 
        return mid;
        
    }
    if (arr[mid-1]==target){
        return mid-1;
    }
    if(arr[mid+1]==target){
        return mid+1;
    }
    if (arr[mid]<target){
        e = mid-2;
    }
    else{
        s=mid+2;
    }
    mid =s+(e-s)/2;
}
return -1;

}
int main(){
vector<int>arr{10,3,40,50,80,70};
int target =70;

int ans= binarysearch(arr,target);
cout << "index of "<< target << " is " <<  ans  <<endl;

}
int firstoccurance(vector<int>v, int target){
    int s=0;
    int e = v.size()-1;
    int mid= s=(e-s)/2;
    while(s<=e){
        int ans=-1;
        if (v[mid]<=target){
            ans=v[mid];
         e =mid-1;   
        }
        else{
            s=mid+1;
        }
        mid =s+(e-s)/2;
    }

}

int main(){
    vector<int>v{ 1,3,4,4,4,4,6,7};
    int target=4;
    int ans=  firstoccurance(v,target);
    cout<<"the first occurance of "<<target<<" is at index "<<ans<<endl;

}


int lastoccurance(vector<int>v, int target){
    int s=0;
    int e = v.size()-1;
    int mid= s=(e-s)/2;
    while(s<e){
        int ans=-1;
        if (v[mid]>=target){
            ans=v[mid];
         e =mid+1;   
        }
        else{
            s=mid-1;
        }
        mid =s+(e-s)/2;
    }

}

int main(){
    vector<int>v{ 1,3,4,4,4,4,6,7};
    int target=4;
    int ans=  lastoccurance(v,target);
    cout<<"the last occurance of "<<target<<" is at index "<<ans<<endl;

}

