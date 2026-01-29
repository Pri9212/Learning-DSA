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