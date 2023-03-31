#include<bits/stdc++.h>
using namespace std;
#define ll long long
void binarysearch(int arr[],int n,int target)
{
    int l=0,h=n-1;
    int mid=l+(h-l)/2;
    while(l<=h)
    {
        if(arr[mid]==target)
        {
            cout<<"INDEX : "<<mid+1<<endl;
            return;
        }
        else if(arr[mid]>target)
            h=mid-1;
        else 
            l=mid+1;
        
        mid=l+(h-l)/2;
    }
    cout<<"TARGET NOT FOUND"<<endl;
}
int main()
{
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"BINARY SEARCH"<<endl;
    binarysearch(arr,n,target);
}