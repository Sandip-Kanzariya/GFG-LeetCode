//{ Driver Code Starts
//Initial Template for Java


//Initial Template for Java



import java.io.*;
import java.util.*;


// } Driver Code Ends
//User function Template for Java


class Solution
{
    
    void sortedMerge(long A[], long B[], long res[], int N,int M)
    {
        Arrays.sort(A); // O(NLogN)
        Arrays.sort(B); // O(MLogM)
        
        // Merge two Sorted arrays : O(N + M)
        int i = 0, j = 0, k = 0;
        
        while(i < N && j < M){
            if(A[i] <= B[j]){
                res[k] = A[i];
                i++;
            }
            else{
                res[k] = B[j];
                j++;
            }
            k++;
        }
        
        while(i < N){
            res[k++] = A[i++];
        }
        
        while(j < M){
            res[k++] = B[j++];
        }
    }
}


//{ Driver Code Starts.

// Driver class
class Array {

    // Driver code
    public static void main(String[] args) throws IOException {
        // Taking input using buffered reader
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int testcases = Integer.parseInt(br.readLine());
        // looping through all testcases
        while (testcases-- > 0) {
//            int n = Integer.parseInt(br.readLine());
            String line = br.readLine();
            String[] q = line.trim().split("\\s+");
            int n =Integer.parseInt(q[0]);
            int m =Integer.parseInt(q[1]);
//            //int y =Integer.parseInt(q[2]);
            String line1 = br.readLine();
            String[] a1 = line1.trim().split("\\s+");
            long a[] = new long[n];
            for (int i = 0; i < n; i++) {
                a[i] = Long.parseLong(a1[i]);
            }
            String line2 = br.readLine();
            String[] a2 = line2.trim().split("\\s+");
            long b[] = new long[m];
            for (int i = 0; i < m; i++) {
                b[i] = Long.parseLong(a2[i]);
            }
            long res[] = new long[500001];
            Solution ob = new Solution();
            ob.sortedMerge(a,b,res,n,m);
            for (int i = 0; i < n+m; i++)
                System.out.print(res[i]+" ");
            System.out.println();
        }
    }
}




// } Driver Code Ends