package treesGraphsRecursion.recursion;

public class RecursionChallenges {
    public static void main(String[] args) {
        //call the method
        System.out.println(factorial(5));

        int[] a = {5, 6, 2, 4, 3, 9, 1};
        printElementInArray(a, 0);
        System.out.println(sumOfElements(a, 0));
        System.out.println(sum(10));
        System.out.println(sumOfGaps(a, 1));//odd
        System.out.println(sumOfGaps(a, 0));//even
    }
    //create the method
    public static int factorial(int n){
        if(n <= 1) return 1;
        return n * factorial(n-1);
    }
    public static void printElementInArray(int[] a, int index){
        if(index >= a.length){
            return;
        }
        System.out.println(a[index]);
        printElementInArray(a, index + 1);
    }

    public static int sumOfElements(int[] a, int index){
        if(index >= a.length){
            return 0;
        }
        return a[index] + sumOfElements(a, index + 1);
    }
    public static int sum(int n){
        if(n <= 1) return 1;
        return n + sum(n - 1);
    }
    public static int sumOfGaps(int[] a, int index){
        if(index >= a.length) return 0;
        return a[index] + sumOfGaps(a, index + 2);
    }
}
