import java.io.*;

class Array {
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim()); //Inputting the testcases
		while(t-->0){
		    //size of array
		    int n = Integer.parseInt(br.readLine().trim());
		    int arr[] = new int[n];
		    String inputLine[] = br.readLine().trim().split(" ");
		    
		    //adding elements
		    for(int i=0; i<n; i++){
		        arr[i] = Integer.parseInt(inputLine[i]);
		    }
		    
		    Kadane obj = new Kadane();
		    
		    //calling maxSubarraySum() function
		    System.out.println(obj.maxSubarraySum(arr, n));
		}
	}
}

class Kadane{
    
    
    int maxSubarraySum(int arr[], int n){
        
        int currsum=0,maxsum=0;
        for(int i=0;i<n;i++){
            currsum=currsum+arr[i];
            if(maxsum<currsum)
            maxsum=currsum;
            if(currsum<0)
            currsum=0;
        }
        return maxsum;
    }
    
}

