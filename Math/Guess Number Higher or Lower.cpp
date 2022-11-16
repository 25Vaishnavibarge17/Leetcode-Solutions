/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
class Solution {
public:
    int guessNumber(int n) {

        int left = 1;
        int right = n;

        while(left<=right){
            // calculate mid .
            int mid = left + (right-left)/2;

            // get result for mid.
            int val = guess(mid);

            if(val == 0) return mid;
            else if(val == -1 ) right = mid-1;
            else left = mid+1;
        }
        return -1;

    }
};
