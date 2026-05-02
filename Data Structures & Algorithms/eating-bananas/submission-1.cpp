class Solution {
public:
    bool isPossible(vector<int> & piles, int h , int n){
        long long  count =0;
        for(int i : piles){
            count += i/n;
            if(i % n !=0)
                count++;
            if(count > h)
                return false;
        }
        return true;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int sol =1;
        while(low <= high){
            int mid = low +(high - low)/ 2;
            cout << mid <<" ";
            if(isPossible(piles, h, mid))
            {   
                sol = mid; 
                high = mid -1;
                
            }
            else
                low = mid +1;
        }
        return sol ;
    }
};
