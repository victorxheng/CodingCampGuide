package competitiveProgramming;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.PrintWriter;
import java.util.Arrays;
import java.util.StringTokenizer;

public class NextRound {
    public static void main(String[] args) throws IOException {
        PrintWriter pw = new PrintWriter(System.out);
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer A = new StringTokenizer(br.readLine());
        int numberOfContestants = Integer.parseInt(A.nextToken());
        int cuttingBlock = Integer.parseInt((A.nextToken()))-1;
        long[] arr = new long[(int) numberOfContestants];
        StringTokenizer B = new StringTokenizer(br.readLine());
        for (int i = 0; i < numberOfContestants; i++) {
            arr[i] = Long.parseLong(B.nextToken());
        }
        long cut = arr[cuttingBlock];
        if(cut <= 0){
            pw.println(0);
        }
        else{
            int index = cuttingBlock+1;
            while(index < arr.length && arr[index] == cut){
                index++;
            }
            pw.println(index);
        }
        pw.close();
    }
}