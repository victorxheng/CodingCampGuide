package treesGraphsRecursion.graphs;

public class GraphExample {
    static boolean[][] adj = new boolean[6][6];

    public static void main(String[] args) {
        adj[0][1] = true;
        adj[0][2] = true;
        adj[0][3] = true;
        adj[0][4] = true;
        adj[1][0] = true;
        adj[1][3] = true;
        adj[2][0] = true;
        adj[2][3] = true;
        adj[2][4] = true;
        adj[2][5] = true;
        adj[3][0] = true;
        adj[3][1] = true;
        adj[3][2] = true;
        adj[3][5] = true;
        adj[4][0] = true;
        adj[4][2] = true;
        adj[5][2] = true;
        adj[5][3] = true;
    }
}
