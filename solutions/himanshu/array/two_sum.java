import java.util.HashMap;
import java.util.HashSet;

public class two_sum {
    static int[] twoSum(int[] arr, int target){

        //Create a hashset to store the elements
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < arr.length; i++) {

            int complement = target - arr[i];

            if(map.containsKey(complement)){
                return new int[] {map.get(complement), i};
            }

            map.put(arr[i], i);


        }

        return new int[] {};

    }


    public static void main(String[] args) {
        int[] arr = {1,4,5,6,8,10,12,7,15};
        int target = 15;

        int[] result = twoSum(arr,target);
        System.out.println("Indices: " + result[0] + "," + result[1]);
    }

}
