// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        long start = 1, end = n, mid = (start + end) / 2;
        
        while(start <= end) {
            mid = (start + end) / 2;
            
            if(guess(mid) == 0) return mid;
            else if(guess(mid) == 1) start = mid + 1;
            else end = mid;
        }
        
        return mid;
    }
};
