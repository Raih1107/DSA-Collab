public class lc1672 {
    public static void main(String[] args) {
        int[][] accounts = {{2,4,5},{4,5,0},{3,4,5}};

        System.out.println(sum(accounts));

    }

    static int sum(int[][] accounts){
        int maxWealth = 0;

        for(int[] customer : accounts){
            int currentWealth = 0;

            for(int bank : customer){
                currentWealth += bank;
            }

            if(currentWealth > maxWealth){
                maxWealth = currentWealth;
            }
        }

        return maxWealth;
    }
}
