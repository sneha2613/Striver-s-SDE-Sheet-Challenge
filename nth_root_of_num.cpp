double multiply(double m, int n) {
     double ans=1.00;
    while(n>0){
        ans*=m;
        n--;
    }
    return ans;
}
double findNthRootOfM(int n, long long m) {
	    double low = 0;
    double high = m+1;
    double eps = 1e-8; 
    
    while((high - low) > eps) {
        double mid = (low + high) / 2.0; 
        if(multiply(mid, n) < m) {
            low = mid; 
        }
        else {
            high = mid; 
        }
    }
    return low;
}
