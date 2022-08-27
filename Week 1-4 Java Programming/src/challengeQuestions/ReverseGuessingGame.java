package challengeQuestions;
import java.util.Random;
import java.util.Scanner;
public class ReverseGuessingGame {
    public static void main(String[] args) {
        int a = 0;
        while(true) {
            Random ran = new Random();
            int r = ran.nextInt(10) + 1;
            Scanner sc = new Scanner(System.in);
            System.out.println("Is it " + r + "? y/n");
            String guess = sc.nextLine();
            if(guess.equals("y")){
                System.out.println("I got your number in " + (a+1) + " guess(es)");
                break;
            }
            else if(guess.equals("n")){
                a += 1;
            }
            else{
                System.out.println("Invalid answer.");
            }
        }
    }
}
