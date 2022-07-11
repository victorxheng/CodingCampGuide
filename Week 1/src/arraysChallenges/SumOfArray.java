package arraysChallenges;

public class SumOfArray {
    public static void main(String[] args) {
        int[] integerArray = {5,6,2,7,10,2,-1,5};
        int sum = 0;
        for(int i = 0; i < integerArray.length; i++){
            sum += integerArray[i];
        }
        System.out.println(sum);
    }
}