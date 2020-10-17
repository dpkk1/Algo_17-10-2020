// C++ program to implement recursive Binary Search 

#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int l, int r, int x){
	if(r>=l){
		int mid = l + (r - l) / 2; 
  
        // If the element is present at the middle 
        // itself 
        if (a[mid] == x) 
            return mid; 
  
        // If element is smaller than mid, then 
        // it can only be present in left subarray 
        if (a[mid] > x) 
            return binarySearch(a, l, mid - 1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(a, mid + 1, r, x);
	}
	return -1;
}



int main(){
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	int x; cin>>x;
	
	int result = binarySearch(a, 0, n - 1, x);
	if(result == -1)
		cout<<"Element is not present in the array";
	else
		cout<<"Element is present at index " << result;
	
	return 0;
}

/**************************************************************************************************************************/
/**************************************************************************************************************************/

// C++ program to implement Iterative Binary Search 

#include<bits/stdc++.h>
using namespace std;
int binarysearch(int a[],int l,int r,int x){
    while(l<=r){
        int mid=l+(r-l)/2;
        if(a[mid]==x)
        return mid;
        else if(a[mid]<x)
        l=mid+1;
        else
        r=mid-1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int x;
    cin>>x;
    int result=binarysearch(a,0,n-1,x);
    if(result==-1)
    cout<<"element not found";
    else
    cout<<res;
    return 0;
}
