package treesGraphsRecursion.trees;

public class MyTreeNode {
    public int data;
    public MyTreeNode left;
    public MyTreeNode right;

    // constructs a leaf node with given data
    public MyTreeNode(int data) {
        this.data = data;
    }

    // constructs a branch node with given data, left subtree,
    // right subtree
    public MyTreeNode(int data, MyTreeNode left, MyTreeNode right) {
        this.data = data;
        this.left = left;
        this.right = right;
    }
}
