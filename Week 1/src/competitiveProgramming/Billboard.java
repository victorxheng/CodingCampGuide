package competitiveProgramming;
import java.io.*;
import java.util.StringTokenizer;

public class Billboard {
    public static void main(String[] args) throws IOException {
        BufferedReader f = new BufferedReader(new FileReader("billboard.in"));
        PrintWriter out = new PrintWriter(new BufferedWriter(new FileWriter("billboard.out")));
        StringTokenizer xy = new StringTokenizer(f.readLine());
        int bb1x1 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb1y1 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb1x2 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb1y2 = Integer.parseInt(xy.nextToken()) + 1000;
        xy = new StringTokenizer(f.readLine());
        int bb2x1 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb2y1 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb2x2 = Integer.parseInt(xy.nextToken()) + 1000;
        int bb2y2 = Integer.parseInt(xy.nextToken()) + 1000;
        xy = new StringTokenizer(f.readLine());
        int truckx1 = Integer.parseInt(xy.nextToken()) + 1000;
        int trucky1 = Integer.parseInt(xy.nextToken()) + 1000;
        int truckx2 = Integer.parseInt(xy.nextToken()) + 1000;
        int trucky2 = Integer.parseInt(xy.nextToken()) + 1000;
        int counter = 0;
        int[][] board = new int [2001][2001];
        for(int row = bb1y1; row < bb1y2; row++) {
            for(int col = bb1x1; col < bb1x2; col++) {
                board[row][col] = 1;
            }
        }
        for(int row = bb2y1; row < bb2y2; row++) {
            for(int col = bb2x1; col < bb2x2; col++) {
                board[row][col] = 1;
            }
        }
        for(int row = trucky1; row < trucky2; row++) {
            for(int col = truckx1; col < truckx2; col++) {
                board[row][col] = 2;
            }
        }
        for(int row = 0; row < board.length; row++) {
            for(int col = 0; col < board[row].length; col++) {
                if (board[row][col] == 1) {
                    counter++;
                }
            }
        }
        out.println(counter);
        out.close();
    }
}