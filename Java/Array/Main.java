import java.util.*;
public class Main
{
   
	public static void main(String[] args) {
		int num;
		Scanner sc=new Scanner(System.in);
		System.out.println("Enter the size of the array");
		num=sc.nextInt();
		Array ar=new Array(num);
		System.out.print("\033\143");
		while(true){
		System.out.println("\n\t1. Print the Array");
		System.out.println("\t2. Insert data in Array");
		System.out.println("\t3. Delete data from Array");
		System.out.println("\t4. Size of the Array");
		System.out.println("\t5. Resize the Array");
		System.out.println("\t6. Exit");
		    int options=sc.nextInt();
		    switch(options){
		        case 1:
		            ar.print();
		            break;
		        case 2:
		            ar.insert();
		            break;
		        case 3:
		            ar.delete();
		            break;
		        case 4:
		            ar.Show_size();
		            break;
		        case 5:
		            ar.resize();
		            break;
		        case 6:
		            System.exit(0);
		        default: System.out.println("Invalid options");
		    }
		}
		
	}


}
