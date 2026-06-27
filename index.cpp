#include<iostream>
#include<vector>
#include<algorithm>
#include<string.h>
#include<string>
#include<queue>
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
// bool ispossible(int arr[],int n,int m ,int mid){
//     int pagesum =0;
//     int c=1;
//     for(int i=0;i<n;i++){
//         if (arr[i]>mid) {
//             return false;
//         }
//         if(pagesum+arr[i]>mid){
//             pagesum = arr[i];
//             c++;
//             if (c>m) return false;
//         }
//         else{
//             pagesum +=arr[i];
//         }
//     }
//     return true;
// }
// int book_allocation(int arr[],int n ,int m){
//     int s=0;
//     int end =0;
//     for(int i=0;i<n;i++){
//         end +=arr[i];
//     }
//     int ans =-1;
//       while(s<=end)  {
//         int mid = s+(s - end)/2;
//         if (ispossible( arr,n,m,mid)){
//             ans = mid;
//             end =mid-1;
//         }
//         else{
//             s = mid+1;
//         }
//       }
//     return ans;
//}
// class Stack{
//    public:
//    int* arr;
//    int top;
//    int size;
//    Stack(int size){
//       arr = new int[size];
//       this->size = size;
//       top = -1;
//    }
//    //functions 
//    void push(int data){
//       if(size - top>1){
//          top++;
   //       arr[top] = data;
   //    }
   //    else{
   //       cout<<"stack is full";
   //    }
   // }
   // void pop(){
   //    if(top== -1){
   //       cout<<"stack is underflow";
   //    }
   //    else{
   //       top--;
   //    }
   // }
   // bool isfull(){
   //    if (top ==size){
   //       return true;
   //    }
//       return false;
//    }
//    bool isempty(){
//       if (top == -1) return true;
//       return false;
//    }
// int getTop(){
//    return arr[top];
// }
// };
//waveprinting of string
// void waveprinting(vector<vector<int>>v){
//    int m = v.size();
//    int n=v[0].size(); 
//    for(int startcol = 0;startcol<n;startcol++){
//       if(startcol%2==0){
//          for (int i =0;i<m;i++){
//             cout<<v[i][startcol]<<" ";
//          }
//       }
      // else{
      //    for(int i=m-1;i>0;i--){
      //       cout<<v[i][startcol]<<" ";
      //    }

      // }
//}
    
//}
// int sqrt(int n){
//    int s=0;
//    int e =n;
//    int mid=s+(e-s)/2;
//    int ans =0;
//    while(s<e){
//    if(mid*mid==n) return mid;
//   else if(mid*mid>n){
//       e = mid-1;
//    }
//    else{
//       ans =mid;
//       s = mid+1;
//    }
//    mid = s+(e-s)/2;
//    }
//    return ans;
// } 
// class Node{
//    public:
//    int data;
//    Node* next;
//    Node(int data){
//       this->data=data;
//       this->next=NULL;
//    }
// };
// Node* reverseknode(Node* &head,int k){
//    if(head==NULL){
//       return NULL;
//    }
//    Node* prev=NULL;
//    Node* curr=head;
//    Node* forward=curr->next;
//    int count=0;
//    while(count<k){
//       forward = curr->next;
//       curr->next=prev;
//       prev=curr;
//       curr=forward;
//       count++;
//    }
//    if(forward!=NULL){
//        head->next=reverseknode(forward,k);
//    }
//    return prev;
// }
// void print(Node* &head){
//    Node* temp= head;
//    while(temp!=NULL){
//     cout<<temp->data<<" ";
//     temp=temp-> next; 
//    }
//    cout<<endl;
// }
// Node* getmiddlepointer(Node* &head){
//    if(head==NULL) return head;
//    if(head->next==NULL) return head;
//    Node*slow= head;
//    Node* fast=head;
//    while(slow!=NULL&&fast !=NULL){
      
//       fast=fast->next;
//       if(fast->next!=NULL){
//         fast=fast->next; 
//         slow=slow->next;
//       } 
      
//    }
//    return slow;
// }
// class stack{
//    public:
//    int* arr;
//    int top;
//    int size;
//    stack(int size){
//       arr = new int[size];
//       this->size=size;
//       top=-1;
//    }
//    void push(int data){
//    if(size-top>1){
//       //space avl
//       top++;
//       arr[top]=data;
//    }
//    else{
//       cout<<"no space avalible";
//    }
// }
// void pop(){
//    if(top==-1){
//       //stack is empty
//       cout<<"stack is empty";
//    }
//    else{
//       top--;
//    }
// }
// void gettop(){
//    if(top==-1){
//       cout<<"satck is empty";
//    }
//    else{

//    cout<<arr[top]<<endl;
//    }
// }
// int getsize(){
//    return top+1;
// }
// bool isempty(){
//    if(top==-1){
//       return true;
//    }
//    else{
//       return false;
//    }
// }
// };
// class dqueue{
//    public:
//    int* arr;
//    int size;
//    int front;
//    int rear;
//    dqueue(int size){
//       this->size=size;
//       arr=new int[size];
//       front=-1;
//       rear=-1;
//    }
//    void push_rear(int data){
//       if(front==size-1 && rear==0){
//          cout<<"array is full data can't be inserted";
//          return;
//       }
//       else if(front==-1){
//       front =0;
//       rear=0;
       
//       }
//       else if(rear==size-1&&front!=0){
//          rear=0;
//       }
//       else{
//          rear++;
//       }
//       arr[rear]=data;
//    }
//    void push_front(int data){
//       if(front==size-1 && rear==0){
//          cout<<"array is full data can't be inserted";
//          return;
//       }
//       else if(front==-1){
//       front =0;
//       rear=0;
       
//       }
//       else if(front==0&&rear!=size-1){
//          rear=size-1;
//       }
//       else{
//          front--;
//       }
//       arr[rear]=data;
//    }


// };
class node{
   public:
   int data;
   node* right;
   node*left;

   node(int data){
     this->data=data;
     right=NULL;
     
     left=NULL;
   }
};
node* buildtree(node* root){
   cout<<"enter data"<<endl;
   int data;
   cin>>data;
   root=new node(data);
   if(data==-1){
      return NULL;
   }
   cout<<"enter data for inserting left of "<<data<<endl;
   root->left=buildtree(root->left);
   cout<<"enter data for inserting right of "<<data<<endl;
 root->right=buildtree(root->right);
return root;
}





int main(){
   node* root=NULL;
   buildtree(root);
   // dqueue dq(10);
   // dq.push_front(10);
   

   // stack s(10);
   // s.push(5);
   // s.push(10);
   // s.push(15);
   // s.push(20);
   // cout<<s.getsize()<<endl;
   // s.gettop();
   // s.pop();
  // s.gettop();
   // Node* first=new Node(10);
   // Node* second=new Node(20);
   // Node* third = new Node(30);
   // Node* fourth=new Node(40);
   // Node* fifth=new Node(50);
   // first->next=second;
   // second->next=third;
   // third->next=fourth;
   // fourth->next=fifth;
   // print(first);
   // cout<<getmiddlepointer(first)->data;
   // Node* n=reverseknode(first,3);
   // print(n);
   
//    int n;
//    cout<<"Enter the value of n";
//    cin>>n;
//   int  x= sqrt(n);
// cout<<"squreroot of number is"<<x;
// int precision;
// cout<<"enter the precision";
// cin>>precision;
// double step=0.1;
// double ans=x;
// for(int i=0;i<precision;i++){

// for (double j =x ;j*j<n;j=j+step){
//  ans=j;
// }
// step = step/10;
// }
// cout<<"final ans is"<<ans;
   // vector<vector<int>>v{ {1,2,3},{4,5,6},{6,7,8},{9,10,11}};
   // waveprinting(v);
//    Stack s(10);
//    s.push(10);
//    s.push(20);
//    s.push(30);
//    s.push(40);
// while(!s.isempty()){
//    cout<<s.getTop()<<" ";
//    s.pop();
// }
    
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
// char ch[100];
// string name = "Priyanshu";
// char str[] = "GeeksforGeeks";
// string name = "GeeksforGeeks";
// //cout<<" enter your name : "<<endl;

// //int i = 0;
//  int e = strlen(str);
//  int f = name.size();
//  cout<<f<<endl;
// cout<<e<<endl;
// int arr[]={30,40,50,60};
// int n = sizeof(arr)/sizeof(int);
// int m =2;
// int ans = book_allocation(arr,n,m);
// cout<<ans<<endl;vector<int>ans;
// vector<int>nums = { 0,1,1,2,1,4};
// vector<int>ans;
//        int n =nums.size() -1;
//        int count0 = 0;
//        int count1 =0;
//        int count2=0;
//        for(int i=0;i<=n;i++){
//         if(nums[i]==0){
//             count0++;
//        }
//        else if(nums[i]==1){
//         count1++;
//        }
//        else{
//         count2++;
//        }
//        }
//        cout<<count0<<endl;
//        cout<<count1<<endl;
//        cout<<count2<<endl;
    //    for(int i=0;i<=n;i++){
    //     if(i<count0){
    //         ans.push_back(0);
    //     }
    //     else if(i>=count1 && i<count1+count0){
    //         ans.push_back(1);
    //     }
    //     else ans.push_back(2);
    return 0;

 }



