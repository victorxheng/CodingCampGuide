package treesGraphsRecursion.trees;

public class MyTreeMain {
    public static void main(String[] args) {
        MyTreeNode root = new MyTreeNode(5);
        root.left = new MyTreeNode(3);
        root.right = new MyTreeNode(6);
        root.right.right.left = new MyTreeNode(5);
        root.left.left = new MyTreeNode(7);
        root.left.right = new MyTreeNode(120);
        root.right.left = new MyTreeNode(3);
        root.right.right.right = new MyTreeNode(5);
        root.right.right = new MyTreeNode(2);
        root.right.left.right = new MyTreeNode(5);
    }
}
