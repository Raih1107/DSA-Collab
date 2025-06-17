public class lc1295 {
    public static void main(String[] args) {
        int[] arr = {1, 22, 33, 456, 1000, 10};
        System.out.println(countEvenDigits(arr));
        System.out.println(fastest(arr));
    }

    static int countEvenDigits(int[] arr) {
        int evenDigits = 0;

        for (int num : arr) {
            int count = 0;
            int temp = num;

            while (temp > 0) {
                temp = temp / 10;
                count++;
            }

            if (count % 2 == 0) {
                evenDigits++;
            }
        }

        return evenDigits;
    }


    static int fastest(int[] arr){
        int evenDigits = 0;

        for(int num : arr){
            int count = (num == 0) ? 1 :  (int)Math.log10(num)+1;

            if(count % 2 == 0){
                evenDigits++;
            }
        }
        return evenDigits;

    }
}


