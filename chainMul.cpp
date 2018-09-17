#include<bits/stdc++.h>
using namespace std;

int chainMulti (int a[] , int strt , int end){
    if( strt == end){
    	return 0 ;
    }
    int ans = INT_MAX;
   
    for(int  strap = strt ; strap < end ; strap++){
    int temp = chainMulti(a , strt , strap ) + chainMulti( a , strap+1 , end) + a[strt - 1]*a[strap]*a[end];
    ans = min(ans , temp);
 
}
return ans; 
}


int main()
{
int arr[] = {1,2,3,4};
int len = sizeof(arr)/sizeof(arr[0]);
int val  =  chainMulti(arr , 1 , len-1);
cout<<val<<endl;


}