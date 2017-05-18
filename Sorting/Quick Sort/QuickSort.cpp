/*
 PROBLEM STATEMENT : https://www.hackerearth.com/practice/algorithms/sorting/quick-sort/practice-problems/algorithm/quick-sort-1/
*/


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef long long ll;

/*
Function to Partition the array.
It takes the first element as the pivot.
*/
ll Partition(vector<ll> &a, ll start, ll end){
    
    ll x = a[start];
    ll m = start;
    
    for(ll i = start+1 ; i<= end ; i++){
        if(a[i] <= x){
            m++;
            swap(a[m],a[i]);
        }
    }
        
    swap(a[start],a[m]);
    return m;
}

void QuickSort(vector<ll> &a, ll start, ll end){
    if(start >= end)
        return;
    ll m = Partition(a,start,end);
    QuickSort(a,start,m-1);
    QuickSort(a,m+1,end);
}


void InputArray(vector<ll> &a, ll size){
        
    for(ll i = 0 ; i < size ; i++){
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
}


void  DisplayArray(vector<ll> a, ll size){
    for(ll i = 0 ; i < size ; i++){
        cout<<a[i]<<" ";
    }
}


int main()
{
    ll n;
    vector<ll> a;
    
    cin>>n;
   
    InputArray(a,n);
    QuickSort(a,0,n-1); 
    DisplayArray(a,n);
    
    return 0;
}
