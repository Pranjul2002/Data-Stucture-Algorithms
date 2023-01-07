package Stack;
public class stack {
    static node top=null;
    public class node{
        int data;
        node next;

        node(int data){
            this.data=data;
            this.next=null;
        }
    }

    public void push(int data){
        node newNode=new node(data);
        if(top==null){
            top=newNode;
            return;
        }
        top.next=newNode;
        top=newNode;
        return;
    }

    public static void main(String[] args) {
        stack s=new stack();
        s.push(2);
        s.push(4);
        s.push(6);
        s.push(8);
        System.out.println(top.data);
    }
}
