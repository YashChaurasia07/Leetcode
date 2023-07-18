class Solution {
    int countStudents(vector<int>& arr,int p,int n){
        int stu = 1;
        long long pages = 0;
        for(int i=0;i<n;i++)
        {
            if(pages + arr[i] <=p)
            {
                pages += arr[i];
            }
            else{
                stu++;
                pages = arr[i];
            }
        }
        return stu;
    }
    int calculateSum(vector<int>& array, int size) {
        int sum = 0;
        for (int i = 0; i < size; i++) {
            sum += array[i];
        }
        return sum;
    }
    int findMaxElement(vector<int>& array, int size) {
        int maxElement = INT_MIN;
        for (int i = 0; i < size; i++) {
            if (array[i] > maxElement) {
                maxElement = array[i];
            }
        }
        return maxElement;
    }
public:
    int splitArray(vector<int>& nums, int m) {
        int n =nums.size();
        int high = calculateSum(nums,n);
        int low = findMaxElement(nums,n);
        int mid = low + (high-low)/2;
        while(low<=high)
        {
            int check = countStudents(nums,mid,n);
            if(check > m){
                low = mid + 1;
            }
            else{
                high = mid-1;
            }
            mid = low + (high-low)/2;
        }
        
        return low;
    }
};