if(n==1){
            return 0; // 0 jumps
        }
        if(arr[0]==0){
            return -1; // not possible
        }
        int jump=1;
        int maxReach= arr[0];
        int steps= arr[0];
        for(int i=1;i<n;i++){
            // if last element then return jump
            if(i==n-1){
                return jump;
            }
            // update maximum possble reach at each step but apply max
            maxReach= max(maxReach, arr[i]+i);
            // each iteration decreses step
            steps--;
            // if steps becomes zero then add a jump and update steps with the maxReachable index- current index
            
            if(steps==0){
                jump++;
                // if current index is greater than the max possible then jump not possible
                if(i>=maxReach){
                    return -1;
                }
                steps= maxReach-i;
            }
        }
        return -1;
    }