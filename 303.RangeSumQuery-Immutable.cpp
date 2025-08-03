class NumArray {
public:
    
    vector<int> array;
    NumArray(vector<int>& nums) {
        array = nums;
        
    }
    
    int sumRange(int left, int right) {
        int sum = 0;

        for(int j = left; j<=right; j++)
        {
            sum = sum + array[j];
        }

        return sum;

        
    }
};