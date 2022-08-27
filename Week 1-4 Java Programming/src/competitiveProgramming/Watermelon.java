package competitiveProgramming;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;

public class Watermelon {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter(System.out);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        long input = Long.parseLong(br.readLine());
        if(input < 4 || input % 2 == 1){
            pw.println("NO");
        }
        else{
            pw.println("YES");
        }
        pw.close();
    }
}