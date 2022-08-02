package competitiveProgramming;

import java.util.Scanner;

public class WeirdAlgorithm
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n  = sc.nextLong();
        System.out.print(n);
        while(n != 1){
            if(n%2 == 1){
                n*=3;
                n++;
            }
            else{
                n/=2;
            }
            System.out.print(" " + n);
        }
    }
}
