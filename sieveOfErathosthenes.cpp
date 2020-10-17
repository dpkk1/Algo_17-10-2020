//The sieve of Eratosthenes is one of the most efficient ways to find all primes smaller than n when n is smaller than 10 million.
//Given a number n, print all primes smaller than or equal to n.

// time Complexity - O(N log (log N))
#include<bits/stdc++.h>
using namespace std;

void SieveOfEratosthenes(long int n) 
{ 
    // Create a boolean array "prime[0..n]" and initialize 
    // all entries it as true. A value in prime[i] will 
    // finally be false if i is Not a prime, else true. 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime));   //get idea about memset.
  
    for (long int p=2; p*p<=n; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (long int p=2; p<=n; p++) 
       if (prime[p]) 
          cout << p << " "; 
} 

int main(){
	long int n; cin>>n;
	cout << "Following are the prime numbers smaller "
         << " than or equal to " << n << "\n"; 
    SieveOfEratosthenes(n); 
    return 0; 
}
