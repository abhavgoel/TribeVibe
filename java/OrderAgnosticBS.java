public class OrderAgnosticBS {
    public static void main(String[] args) {
        int[] arr1 = {1,1,2,3,4,5,6,7,8,9};
        int[] arr2= {9,9,8,7,6,5,4,3,2,1};
        int target = 5;
        System.out.println(oaBinarySearch(arr1,target));
        System.out.println(oaBinarySearch(arr2,target));
    }
    static int oaBinarySearch(int[] nums, int target){
        int n=nums.length;
        int s=0,e=n-1;
        while( s <= e ) {
            int m = s + ( ( e - s ) / 2 ) ;
            if(target==nums[m]){return m;}
            if(nums[0]<nums[n-1]) {
                if (target < nums[m]) {
                    e = m - 1;
                } else if (target > nums[m]) {
                    s = m + 1;
                }
            }
            else{
                if (target > nums[m]) {
                    e = m - 1;
                } else if (target < nums[m]) {
                s = m + 1;
                }
            }
        }
        return -1;
    }
}
