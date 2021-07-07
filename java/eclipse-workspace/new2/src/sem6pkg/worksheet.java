package sem6pkg;

import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class worksheet {

	public static void main(String[] args) {
		System.out.println("1. Insert\r\n" + 
				"2. Search\r\n" + 
				"3. Delete\r\n" + 
				"4. Display\r\n" + 
				"5. Sort\r\n" + 
				"6. Exit\r\n");
		
		
		 int x;
		 boolean t=true;
		 int n = 5; 
	        ArrayList<Integer> arr  = new ArrayList<Integer>(n);
	        arr.add(2);
	        arr.add(5);
	        arr.add(7);
		do
		{
			Scanner sc=new Scanner(System.in);
			int k= sc.nextInt();
			
		switch (k) {
		  case 1:
			  	System.out.println("Enter no to add");
			  	x = sc.nextInt();
			  	arr.add(x);
			  	System.out.println("Items of the list are");
			  	System.out.println(arr);
			  	break;
		  case 3:
			  	System.out.println("Enter index of no to remove");
			  	x = sc.nextInt();
			  	arr.remove(x);
			  	System.out.println("Items of the list are");
			  	System.out.println(arr);
			  	break;
		  case 5:
			    System.out.println("Sorting list");
			    Collections.sort(arr);
			    System.out.println("Items of the list are");
			  	System.out.println(arr);
			    break;
		  case 2:
			    System.out.println("Enter no to check if it is in list");
			    x = sc.nextInt();
			    boolean ans = arr.contains(x);
			    if (ans) 
		            System.out.println("The list contains the no"); 
		        else
		            System.out.println("The list does not contains the no");
			    break;
		  case 4:
			    System.out.println("Display list");
			  	System.out.println(arr);
			    break;
		  default:
		    System.out.println("wrong choice");
		}
		}
		while(t!=false);

	}

}
