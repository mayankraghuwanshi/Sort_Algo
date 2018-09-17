#include<bits/stdc++.h>
using namespace std;
int store[100][100];
int chainMulti (int a[] , int strt , int end){
    if( strt == end){
    	store[strt][end]=0;
    	return 0 ;
    	
    }
    //OVERLAPPING_SUB-PROBLEM.
    if(store[strt][end]!=-1){
    	return store[strt][end];
    }
    int ans = INT_MAX;
   
    for(int  strap = strt ; strap < end ; strap++){
    int temp = chainMulti(a , strt , strap ) + chainMulti( a , strap+1 , end) + a[strt - 1]*a[strap]*a[end];
    ans = min(ans , temp);
    store[strt][end] = ans;
}
return ans; 
}


int main()
{
memset(store , -1 , sizeof store);
int arr[] = {1,2,3,4};
int len = sizeof(arr)/sizeof(arr[0]);
int val  =  chainMulti(arr , 1 , len-1);
cout<<val<<endl;
}