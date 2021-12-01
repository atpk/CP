#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return true;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }
 
    // We reach here when element is not
    // present in array
    return false;
}

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        
        int a[n];
        for(int i=0;i<n;i++)cin>>a[i];
        
        sort(a, a+n);
        
        int m=n/2;
        int x[m];
        int y[m];
        int k=0;
        int flag=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int c=a[j]%a[i];
                if(!binarySearch(a,0,n-1,c)){
                    x[k]=a[j];
                    y[k]=a[i];
                    k++;
                    if(k>=m){
                        flag=1;
                        break;
                    }
                }
            }
            if(flag)
                break;
        }
        
        if(!flag){
            for(int i=n-1;i>=0;i--){
                for(int j=i-1;j>=0;j--){
                    int c=a[j]%a[i];
                    if(!binarySearch(a,0,n-1,c)){
                        x[k]=a[j];
                        y[k]=a[i];
                        k++;
                        if(k>=m){
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag)
                    break;
            }
        }
        
        for(int i=0;i<k;i++){
            cout<<x[i]<<" "<<y[i]<<endl;
        }
    }
    
    return 0;
}