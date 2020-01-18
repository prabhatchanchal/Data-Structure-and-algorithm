import java.util.*;  
public class Array{
      private int[] arr;
      private int size;
    public Array(int si){
         arr=new int[si];
           size=si;
           }
    public void print(){
        for(int i=0; i<size; i++){
        System.out.print("index : "+(i+1));
        System.out.println(" | data : "+arr[i]);
        }
    }
    public void insert(){
        char conferm='y';
        while(conferm=='y'){
            int pos,data;
        System.out.println("\t Enter data to insert ");
        Scanner sc = new Scanner(System.in);
        data=sc.nextInt();
        System.out.println("\nEnter position to insert ");
        pos=sc.nextInt();
        arr[pos-1]=data;
        System.out.println("Do you want to insert more [y/n]");
        conferm=sc.next().charAt(0);
        }
    }
    public void delete(){
         char conferm='y';
        while(conferm=='y'){
            int pos;
        System.out.println("\t Enter pos to Delete ");
        Scanner sc = new Scanner(System.in);
        pos=sc.nextInt();
        int i=pos-1;
        for(; i<size-1; i++)arr[i]=arr[i+1];
        arr[i]=0;
        System.out.println("Do you want to delete more [y/n]");
        conferm=sc.next().charAt(0);
        }
    }
    public void Show_size(){
        System.out.println("Size of the array is "+size);
    }
    public void resize(){
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter new size of array");
        int newsize=sc.nextInt();
        int newItems[] = new int[newsize];
        for(int i=0; i<size; i++){newItems[i]=arr[i];}
        arr = newItems;
        size=newsize;
    }
}
