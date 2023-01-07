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

    public void addLast(int data){
        node newNode=new node(data);
        if(front==null){
            front=newNode;
            return;
        }
        node temp=front;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=newNode;
        return;
    }
    
    public void printlist(){
        if(front==null){
            System.out.println("Empty list");
            return;
        }
        node temp=front;
        while(temp.next!=null){
            System.out.print(temp.data+"->");
            temp=temp.next;
        }
        System.out.println("NULL");
        return;
    }

    public static void main(String[] args) {
        linklist ll=new linklist();
        ll.addFirst(2);
        ll.addFirst(4);
        ll.addFirst(6);
        ll.addFirst(8);
        ll.addLast(10);
        ll.addLast(12);
        ll.addLast(14);
        System.out.println("front element is- "+front.data);
        ll.printlist();
    }
}