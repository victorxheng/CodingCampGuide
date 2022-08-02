package competitiveProgramming;

import java.io.*;
import java.util.StringTokenizer;

public class MaximumNumberChallenge {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int times = Integer.parseInt(br.readLine());

        StringTokenizer A = new StringTokenizer(br.readLine());
        int max = Integer.parseInt(A.nextToken());
        for (int i = 1; i < times; i++ ) {
            max = Math.max(max, Integer.parseInt(A.nextToken()));
        }

        PrintWriter pw = new PrintWriter(new PrintStream(System.out));
        pw.println(max);
        pw.close();
    }
}

