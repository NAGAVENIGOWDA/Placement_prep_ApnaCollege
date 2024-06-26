//{ Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	// Your code here
        sort(arr, arr+n);
        sort(dep, dep+n);
        
     

        int plat_needed = 1; // for first arriving train
        int result = 1;
        
        int i = 1;  // as we start from second arriving train
        int j = 0; // start from first departing train
        
        while(i<n && j<n){
            // eg: 6pm a train departing, 6pm other train is arriving
          
            if(arr[i] <= dep[j]){
                plat_needed++; 
                result = max(result, plat_needed); 
                i++;
            }
            
            else if(arr[i] > dep[j]){
                plat_needed--; 
                j++;
            }
            
        }
        return result;
    }
};


//{ Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
        Solution ob;
        cout <<ob.findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}
// } Driver Code Ends