if (arr == NULL || n<=0) return -1;
       sort(arr,arr+n);
       int mini = 0,maxi = 0,res = 0;
       res = arr[n-1] - arr[0];
       for (int i = 1;i<n;++i){
           if (arr[i]>=k){
               maxi =max(arr[i-1]+k,arr[n-1]-k);
               mini =min(arr[i]-k,arr[0]+k);
       
               res = min(res,maxi-mini);
           }else {
               continue;
           }
       }
       return res;