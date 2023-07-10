bool isPrime(int n)
{
	// Write your code here.
	if(n == 1)
		return false;
    for (int i=2 ; i*i<=n ; i++) {  // O(sqrt(n))   i<n/2 will take O(n)
        if (n % i == 0) {
			return false;
		}
    }
	return true;
}
