public class lc34 {

    // Floor + 1 to find first occ
    static int first(int[] arr, int target){

        int start = 0;
        int end = arr.length -1 ;

        while(start <= end){
            int mid = start + (end - start)/2;

            if(target <= arr[mid]){
                end = mid - 1;
            }else{
                start = mid + 1;
            }
        }

        return end + 1;
    }

    // Ceil - 1 to find last occ
    static int last(int[] arr, int target){
        int start = 0;
        int end = arr.length - 1;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(target < arr[mid]){
                end = mid - 1;

            }else{
                start = mid + 1;
            }
        }

        return start - 1;
    }

    public static void main(String[] args) {
        int[] arr = {1,2,2,4,5,5,5,5,6,6,6};
        int target = 6;


        int firstOcc = first(arr,target);
        System.out.println(firstOcc);

        int lastOcc = last(arr,target);
        System.out.println(lastOcc);
    }
}
