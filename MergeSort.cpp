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
         // Your code here
         int L[m-l+1];
         int R[r-m];
         int K=l;
         for(int i=0;i<(m-l+1);i++){//fill left array
             L[i]=arr[K];K++;
         }
         for(int i=0;i<(r-m);i++){//fill right array
             R[i]=arr[K];K++;
         }
         int i=0;// L
         int j=0;// R
         int k=l;
         while(i<(m-l+1) && j<(r-m)){//merge
             if(L[i]<=R[j]){
                 arr[k]=L[i];i++;k++;
             }
             else{
                 arr[k]=R[j];j++;k++;
             }
         }// j kathm but i stll left
         while(i<(m-l+1)){
             arr[k]=L[i];i++;k++;
         }
         while(j<(r-m)){
             arr[k]=R[j];j++;k++;
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r){
            return;
        }
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,l,mid,r);
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
