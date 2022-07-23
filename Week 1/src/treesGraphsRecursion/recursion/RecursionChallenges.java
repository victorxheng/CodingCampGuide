package treesGraphsRecursion.recursion;

public class RecursionChallenges {
    public static void main(String[] args) {
        //call the method
        System.out.println(factorial(5));
    }
    //create the method
    public static int factorial(int n){
        if(n <= 1) return 1;
        return n * factorial(n-1);
    }
}
