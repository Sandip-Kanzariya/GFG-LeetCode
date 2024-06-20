//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

/*  Pick's Algorithm 
    
    A = l + (b / 2) - 1;
    
    A : Area of Polygon 
    l : # of lattice / integral points inside polygon 
    b : # of lattice / integral points on boundary of polygon 
    
    l = A - (b / 2) + 1;
    
    // Area : A => Shoelace Formula 
    A =  ( | x1 * (y2 - y3) + x2 * (y - y1) + x3 * (y1 - y2)| ) / 2
    
    
    // For Boundary Points : b 
    Case:1 => Ax == Bx : Vertical Line 
    
        b += max(Ay, By) - min(Ay, By) - 1
        
    Case:2 => Ay == By : Horizontal Line 
    
        b += max(Ax, Bx) - min(Ax, Bx) - 1
        
    Case:3 => Line with Slope 
    
        p = |Ax - Bx| 
        q = |Ay - By| 
        
        b += gcd(p, q) - 1;
        
*/
class Solution {
  public:
  
    // For Boundary Points : b (Except Triangle Vertex)
    int helper(long long int A[], long long int B[]){
        
        // Vertical Line 
        if(A[0] == B[0]){
            return (max(A[1], B[1]) - min(A[1], B[1]) - 1);
        }
        else if(A[1] == B[1]){ // Horizontal line
            return (max(A[0], B[0]) - min(A[0], B[0]) - 1);
        }
        else{
            
            long long int p = abs(A[0] - B[0]);
            long long int q = abs(A[1] - B[1]); 
            
            return (__gcd(p, q) - 1);
        }
    }
    
    long long int InternalCount(long long int p[], long long int q[],
                                long long int r[]) {
                                    
        long long int area = abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1])) / 2;
        // long long int aread = abs(p[0] * (q[1] - r[1]) + q[0] * (r[1] - p[1]) + r[0] * (p[1] - q[1]));
        
        long long int b = helper(p, q) + helper(q, r) + helper(r, p) + 3;// 3 is vertices of triangle 
        
        long long int l = area - (b / 2) + 1;
        // long long int l = (aread - b + 2) / 2;
        
        return l;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int p[2], q[2], r[2];
        cin >> p[0] >> p[1] >> q[0] >> q[1] >> r[0] >> r[1];
        Solution ob;
        long long int ans = ob.InternalCount(p, q, r);
        cout << ans << "\n";
    }
}
// } Driver Code Ends