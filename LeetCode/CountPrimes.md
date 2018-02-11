# Count Primes
[https://leetcode.com/problems/count-primes/description/](https://leetcode.com/problems/count-primes/description/)


### Accepted Solution:
```
class Solution {
    public int countPrimes(int max) {
      
		boolean[] sieve = new boolean[max];
        int c =0;
		//Arrays.fill(sieve,false);
		for(int i = 2;i<max;i++){
			if(sieve[i] == false){
                c = c+1;
				sieve = sieveNonPrime(sieve,i, max);
			}
		}

		return c;
    }
    

	boolean[] sieveNonPrime(boolean[] sieve, int k, int max){
		for(int j = 2;j*k<max;j++){
		    {
				sieve[j*k] = true;
			}
		}
		return sieve;
	}
}
```

### Editorial:
```
public class Solution {
    public int countPrimes(int n) {
        boolean[] notPrime = new boolean[n];
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (notPrime[i] == false) {
                count++;
                for (int j = 2; i*j < n; j++) {
                    notPrime[i*j] = true;
                }
            }
        }
        
        return count;
    }
}
```