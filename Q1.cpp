/* 
sarang 
2010991713
set-04
Question 1
 */


#include<bits/stdc++.h>
#define ll long long 
using namespace std;


#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool ans=true;
int min_index(int arr[],int n){

    
    // initialized the min index as n

     int md=n;

     unordered_map<int,int> mp;

     for(int i=0;i<n;i++){
        if(mp.find(arr[i])!=mp.end()){

            // check if the element is already present the chk if the index is smaller 
            // than md , if yes then update md

            md=min(md,mp[arr[i]]);

        }

        else{

            // else add in the map

            mp[arr[i]]=i;
        }
     }

    // if there are no repeating element then there is an exception
    
    return md;

}
int main(){
ios_base::sync_with_stdio(false); cin.tie(NULL);

int n;cin>>n;

/* 

input -

7
5 6 3 4 3 6 4

//////////////


input-

6
1 2 3 4 5 6



 */


 

        int arr[n];

        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        

        int ckii=min_index(arr,n);
        if(ckii==n){
            cout<<"Invalid Input";
        }

        else{

            cout<<"The minimum index of the repeating element is " <<ckii;

        }

        
        
        




return 0;
}


