#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
using  namespace std;
//code for searching an element in nearly sorted array
// int binarysearch(vector<int>arr, int target){
//     int s=0;
//     int e=arr.size()-1;

//     int mid =s +(e-s)/2;
//     while(s<=e){
//     if (arr[mid]==target){ 
//         return mid;
        
//     }
//     if (arr[mid-1]==target){
//         return mid-1;
//     }
//     if(arr[mid+1]==target){
//         return mid+1;
//     }
//     if (arr[mid]<target){
//         e = mid-2;
//     }
//     else{
//         s=mid+2;
//     }
//     mid =s+(e-s)/2;
// }
// return -1;

// }
// int firstoccurance(vector<int>v, int target){
//     int s=0;
//     int e = v.size()-1;
//     int mid= s=(e-s)/2;
//     while(s<=e){
//         int ans=-1;
//         if (v[mid]<=target){
//             ans=v[mid];
//          e =mid-1;   
//         }
//         else{
//             s=mid+1;
//         }
//         mid =s+(e-s)/2;
//     }

// }
// int lastoccurance(vector<int>v, int target){
//     int s=0;
//     int e = v.size()-1;
//     int mid= s=(e-s)/2;
//     while(s<e){
//         int ans=-1;
//         if (v[mid]>=target){
//             ans=v[mid];
//          e =mid+1;   
//         }
//         else{
//             s=mid-1;
//         }
//         mid =s+(e-s)/2;
//     }

// }
// string cal_sum(int*a,int m,int*b,int n){
//     int carry=0;
//     string ans;
//     int i=m-1;
//     int j=n-1;
//     while(i>0 &&j >0){
//         int x=a[i]+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         i--,j--;
//     }
//     while(i>0 ){
//         int x=a[i]+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         i--;
//     }
//     while(j >0){
//         int x=a[i]+b[j]+carry;
//         int digit=x%10;
//         ans.push_back(digit+'0');
//         carry=x/10;
//         j--;
//     }
//     if( carry){
//         ans.push_back(carry+'0');
//     }
//     reverse(ans.begin(),ans.end());
//     return ans;
// }
//  double squreroot(int n,int precision)   {
//     int s=0;
//     int e=n;
//     int mid =s+(e-s)/2;
//     double ans;
//     while(s<e){
//         if (mid*mid ==n){
//             ans =mid;
//             return ans;
//         }
// if( mid*mid > n){
//     //left search
//     e = mid-1;

// }
// else{
// ans=mid;
// s = mid+1;
// }
// mid = s+(e-s)/2;
//     }
    
//     return ans;
//  }
// int binary_search(int arr[],int start, int end ,int x){
//      int mid=(start+end)/2;
//      while(start<=end){
//         if (arr[mid]==x) return mid;
//         if(arr[mid]>x){
//             end = mid -1;
//         }
//         else{
//             start = mid+1;
//         }
//         mid = (start+end)/2;
//      }
//      return -1;
// }
// int exponential_search(int arr[],int n,int x){
//     if (arr[0]==x) return x;
//     int i=1;
//     while(i<n && arr[i]<x){
//         i=i*2;
//     }
//     return binary_search(arr,i/2,min(i,n-1),x);
// }





int main(){
    
// vector<int>arr{10,3,40,50,80,70};
// int target =70;

// int ans= binarysearch(arr,target);
// cout << "index of "<< target << " is " <<  ans  <<endl;

// vector<int>v{ 1,3,4,4,4,4,6,7};
//     int target=4;
//     int ans=  firstoccurance(v,target);
//     cout<<"the first occurance of "<<target<<" is at index "<<ans<<endl;

//     vector<int>v{ 1,3,4,4,4,4,6,7};
//     int target=4;
//     int ans=  lastoccurance(v,target);
//     cout<<"the last occurance of "<<target<<" is at index "<<ans<<endl;
// int n =35;
// cout<<"enter the number";
// cin>>n;
// int precision;
// cout<<"enter precision ";
// cin>>precision;
// double ans = squreroot(n,precision);

// cout<<ans<<endl;
// double step =0.1;
// for (int i=0;i<precision;i++){
//     for (double j=ans;j*j<=n;j=j+step){
//         ans =j;
//     } 
//     step = step/10;
// }

// cout << "final ans "<<ans<<endl;
// int arr[] ={ 3,4,5,6,11,13,14,15,56,70};
// int x =13;
// int start =0;
// int end=sizeof(arr)/sizeof(int);
// int n=end;
// int ans = exponential_search(arr,n,x);
// cout<<ans<<endl;

 }



