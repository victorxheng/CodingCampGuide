package competitiveProgramming;
import java.io.*;
import java.util.StringTokenizer;

public class FencePainting {
    public static void main(String[] args) throws IOException {
        //BufferedReader f = new BufferedReader(new InputStreamReader(System.in));
        //PrintWriter out = new PrintWriter(new PrintStream(System.out));
        BufferedReader f = new BufferedReader(new FileReader("paint.in"));
        PrintWriter out = new PrintWriter(new FileWriter("paint.out"));
        StringTokenizer st = new StringTokenizer(f.readLine());
        int A = Integer.parseInt(st.nextToken());
        int B = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(f.readLine());
        int C = Integer.parseInt(st.nextToken());
        int D = Integer.parseInt(st.nextToken());
        int sum = 0;
        for(int i = 0; i <= 100; i++){
            if(i >= A && i < B || i >= C && i < D){
                sum++;
            }
        }
        out.println(sum);
        out.close();
    }
}