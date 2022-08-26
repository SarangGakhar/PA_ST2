/* 
sarang
2010991713
set-04
question2
 */


// given an integer array, checck if consecutive integers form the array





#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool chk_consecutive(ll arr[],ll n){

    

    // if any one passes empty array then the exception will be called and
    //it will print this-

    if(n<=0) throw string("NA");

    // find the min element in the array

    ll min_ele=*min_element(arr,arr+n);

    
    // store all the elements in unordered set
    unordered_set<ll> st(arr,arr+n);

    if(st.size()!=n){
        // if the size does not match that means there are duplicates elements in 
        // the array

        return false;
    }

    for(ll i=1;i<n;i++){

        // check if the next n-1 consecutive elements of the min element is present 
        // or not , if no then that means does not has all consecutive elements 

        if(st.find(min_ele+i)==st.end()){
            return false;
        }
    }

    
    return true;


}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);



/* 

input-

7               
-1 5 4 2 0 3 1   

input-

5         
4 2 4 3 1

 */


    ll n;cin>>n;

    

    
    try{

        ll arr[n];
        for(ll i=0;i<n;i++){
        cin>>arr[i];
        }
        
        if(chk_consecutive(arr,n)){

            int mne=*min_element(arr,arr+n);
            int mx=*max_element(arr,arr+n);
        cout<<"The array contains consecutive elements from "<<mne<<" to "<<mx;
    }

    else{

        unordered_map<ll,ll> map;

        for(int i=0;i<n;i++){
            map[arr[i]]++;

        }


        cout<<"The array does not contain consecutive integers as ";


        for(auto i:map){
            if(i.second>1){
                cout<<i.first<<", ";
            }
        }

        cout<<"is repeated ";
    }




         
    }

    catch (string &s){
        cout<<s;

    }

    

return 0;
}