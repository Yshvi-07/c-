class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
        long long start=0;
        long long end=n-1;
        long long result=-1;
        
        long long mid=0;
        while(start<=end){
            mid=start+(end-start)/2;
            if(v[mid]<=x){
                result=mid;
                start=mid+1;
            }
            else {
                end=mid-1;
                
            }
            
            
        }
        return result;
        //returning the result
        
    }
};


//{ Driver Code Starts.


int main() {
	
	long long t;
	cin >> t;
	
	while(t--){
	    long long n;
	    cin >> n;
	    long long x;
	    cin >> x;
	    
	    vector<long long> v;
	    
	    for(long long i = 0;i<n;i++){
	        long long temp;
	        cin >> temp;
	        v.push_back(temp);
	    }
	    Solution obj;
	    cout << obj.findFloor(v, n, x) << endl;
	   
	}
	
	return 0;
}
// } Driv
