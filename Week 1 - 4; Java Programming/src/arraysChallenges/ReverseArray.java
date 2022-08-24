package arraysChallenges;

import java.util.Scanner;

class ReverseArray {
    //credit: Jan
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        for (int i = 0; i < T; i++){
            int N = sc.nextInt();
            int[] a = new int[N];
            for (int j = 0; j < N; j++){
                a[j] = sc.nextInt();
            }
            for (int k = N - 1; k > -1; k--) {
                System.out.print(a[k]);
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}