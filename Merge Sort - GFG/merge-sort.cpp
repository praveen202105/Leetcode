//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
        int l1=m-l+1;
        int l2=r-m;
        
        // vector<int>left,right;
        int left[l1],right[l2];
         
        for(int i=0;i<l1;i++){
            left[i]=arr[i+l];
        }
        
        for(int i=0;i<l2;i++){
            right[i]=arr[m+1+i];
        }
        
           
           
     int lefti=0,righti=0, mainindex=l;
     
     while(lefti<l1 && righti<l2){
         if(left[lefti]<=right[righti]){
             arr[mainindex++]=left[lefti++];
         }else{
             arr[mainindex++]=right[righti++];
         }
         
     }
     
     
     while(lefti<l1){
         arr[mainindex++]=left[lefti++];
     }
     
     while(righti<l2){
         arr[mainindex++]=right[righti++];
     }
     
     
        
         // Your code here
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
       if(l>=r) return;
       int m=l+(r-l)/2;
       
       mergeSort(arr,l,m);
       mergeSort(arr,m+1,r);
       
       
       merge(arr,l,m,r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends