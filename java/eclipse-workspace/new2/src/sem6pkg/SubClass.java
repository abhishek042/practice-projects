package sem6pkg;


 class SuperClass{
	   final void display() {
	      System.out.println("This is a method of the superclass");
	   }
	}
	public class SubClass extends SuperClass{
	   public static void main(String args[]){
	      //Calling method of the superclass
	      new SubClass().display();
	   }
	}