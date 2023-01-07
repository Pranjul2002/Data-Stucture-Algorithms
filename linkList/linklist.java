public class linklist{
    static node front=null;
    public class node{
        int data;
        node next;

        node(int data){
            this.data=data;
            this.next=null;
        }
    }

    public void addFirst(int data){
        node newNode=new node(data);
        if(front==null){
            front=newNode;
            return;
        }
        newNode.next=front;
        front=newNode;
        return;
    }

    public static void main(String[] args) {
        linklist ll=new linklist();
        ll.addFirst(2);
        ll.addFirst(4);
        ll.addFirst(6);
        ll.addFirst(8);
        System.out.println("front element is- "+front.data);
    }
}