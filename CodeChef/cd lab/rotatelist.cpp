#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
// Include headers as needed
void leftRotate(int arr[], int n, int R) {
   int i,j;
    for (i = 0; i < R; i++) {
       int temp = arr[0];
       for (j = 0; j < n - 1; j++)
           arr[j] = arr[j + 1];
       arr[j] = temp;
   }
}

int main()
{
  int t;
  cin>>t;
    // Write your code here
	while(t--){    
        int n;cin>>n;
    	int arr[n];
  		for(int i =0; i< n;i++)
  		{
    		cin>>arr[i];
  		}
  		int r;cin>>r;
  		leftRotate(arr,n,r);
  
  		for(int i =0;i<n;i++)
  		{
    	cout<<arr[i]<<" ";
  		}
        cout<<endl;
	}
  
    // Return 0 to indicate normal termination
    return 0;
}
