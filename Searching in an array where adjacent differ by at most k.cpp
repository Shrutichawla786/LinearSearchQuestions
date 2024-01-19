Link-->https://www.geeksforgeeks.org/problems/searching-in-an-array-where-adjacent-differ-by-at-most-k0456/1
Q.Searching in an array where adjacent differ by at most k
code--> for(int i=0;i<n;i++){
        if(arr[i]==x){
            return i;
        }
        
    }
    return -1;

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).
