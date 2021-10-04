public class BinarySearch {

    public static void main(String[] args) {
        int[] nums={1,1,2,3,4,5,6,7,8,9};
        int target=5;
        int index = binarySearch(nums,target);
        System.out.println("The element "+target+" is present at index "+index+" of the array");
    }
//returning the index of target
//if not found, return -1
    static int binarySearch(int[] nums, int target){
        int n=nums.length;
        int s=0,e=n-1;
        while( s <= e ) {
            //find middle element
            //int m = (s + e) / 2; //in some cases, the s+e might be larger than what int could hold in java, this will give us errors
            //better way to find the mid :
            int m = s + ( ( e - s ) / 2 ) ;
            if(target < nums[m] ) {
                e = m - 1 ;
            }else if(target > nums[m] ) {
                s = m + 1 ;
            }else{
                return m;//ans found
            }
        }
        return -1;//target not present in array
    }
}
