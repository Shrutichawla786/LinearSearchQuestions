link->https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1
Q.Value equal to index value
code-->


vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int>ans;
	    for(int i=0;i<n;i++){
	        if(arr[i]==i+1){
	            ans.push_back(arr[i]);
	        }
	    }
	    return ans;
	}

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)
