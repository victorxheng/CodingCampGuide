import java.io.*;
import java.util.StringTokenizer;

public class Square {
    public static void main(String[] args) throws IOException {
        BufferedReader f = new BufferedReader(new FileReader("square.in"));
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("square.out")));
        StringTokenizer nums = new StringTokenizer(f.readLine());
        int ax1 = Integer.parseInt(nums.nextToken());
        int ay1 = Integer.parseInt(nums.nextToken());
        int ax2 = Integer.parseInt(nums.nextToken());
        int ay2 = Integer.parseInt(nums.nextToken());
        nums = new StringTokenizer(f.readLine());
        int bx1 = Integer.parseInt(nums.nextToken());
        int by1 = Integer.parseInt(nums.nextToken());
        int bx2 = Integer.parseInt(nums.nextToken());
        int by2 = Integer.parseInt(nums.nextToken());
        int big = 0;
        int diffx1 = Math.abs(bx2-ax1);
        int diffx2 = Math.abs(ax2-bx1);
        int diffy1 = Math.abs(by2-ay1);
        int diffy2 = Math.abs(ay2-by1);
        int diffy3 = Math.abs(ay2-ay1);
        int diffy4 = Math.abs(by2-by1);
        int[] arr = {diffx1, diffx2, diffy1, diffy2, diffy3, diffy4};
        for(int i = 0; i < arr.length; i++) {
            if (arr[i] > big) {
                big = arr[i];
            }
        }
        out.println(big*big);
        out.close();
    }
}