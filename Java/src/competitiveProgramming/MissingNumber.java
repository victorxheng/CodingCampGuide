package competitiveProgramming;

import java.util.Scanner;

public class MissingNumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextInt();
        long[] arr = new long[(int)(n - 1)];
        int count = 0;
        int count2 = 0;
        for(int i = 0; i < n - 1; i++){
            arr[i] = sc.nextLong();
        }
        count = (int)(n*(n+1))/2;
        for(int k = 0; k < arr.length; k++){
            count2 += arr[k];
        }
        System.out.println(count - count2);
    }
}
