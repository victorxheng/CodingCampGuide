package competitiveProgramming;

import java.util.Scanner;

public class Repetitions {
    public static void main(String[] args) {
        long moves = 0;
        Scanner sc = new Scanner(System.in);
        long n = sc.nextInt();
        long[] arr = new long[(int)(n)];
        for(int i = 0; i < arr.length; i++){
            arr[i] = sc.nextLong();
        }
        for(int j = 1; j < arr.length; j++){
            if(arr[j] < arr[j-1]){
                moves += (arr[j-1] - arr[j]);
                arr[j] = arr[j-1];
            }
        }
        System.out.println(moves);
    }
}
