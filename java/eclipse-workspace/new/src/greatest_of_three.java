
public class greatest_of_three {
	public static void main (String[] args)
	{
		System.out.println("program to find greatest of 3 number");
		int x =10;
		int y =23;
		int z =99;
		if(x > y && x > z)
        {
            System.out.println("Largest number is x :"+x);
        }
        else if(y > z)
        {
            System.out.println("Largest number is y :"+y);
        }
        else
        {
            System.out.println("Largest number is z :"+z);
        }
	}

}
