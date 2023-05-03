public class BST {
    
    static Node root=null;
    static class Node{
        int data;
        Node left;
        Node right;

        Node(int data){
            this.data=data;
            this.left=null;
            this.right=null;
        }
    }

    public static void insert(int data){
        Node newNode=new Node(data);
        if(root==null){
            root=newNode;
            return;
        }
        Node curNode=root;
        Node parent=null;
        while(curNode!=null){
            parent=curNode;
            if(data <= curNode.data){
                curNode=curNode.left;
            }else{
                curNode=curNode.right;
            }
        }
        if(data <= parent.data){
            parent.left=newNode;
            return;
        }else{
            parent.right=newNode;
            return;
        }
    }

    public static void ineorderTraversal(Node root){
        if(root==null){
            return;
        }
        ineorderTraversal(root.left);
        System.out.println(root.data);
        ineorderTraversal(root.right);
    }

    public static void preorderTraversal(Node root){
    }

    public static void postorderTraversal(Node root){
    }
    


    public static void main(String[] args) {
        insert(9);
        insert(4);
        insert(12);
        insert(9);
        insert(2);
        ineorderTraversal(root);
    }
}
