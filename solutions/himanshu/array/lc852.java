public class lc852 {

    public static void main(String[] args) {
        int[] arr ={ 0,2,3,10,8,7};

        System.out.println(index(arr));
    }

    static int index(int[] arr){
        int start = 0;
        int end = arr.length - 1;

        while(start < end){
            int mid = start + (end-start)/2;

            if(arr[mid] > arr[mid+1]){
                end = mid;
            }else{
                start = mid + 1;
            }
        }
        return start;
    }


}
