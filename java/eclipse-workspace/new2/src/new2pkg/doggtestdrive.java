package new2pkg;
class dogg
{
	int size;
	String name;
	String breed;
	
	void bark()
	{
		System.out.println("woof woof");
	}
	}


 public class doggtestdrive {

	public static void main(String[] args) {
		dogg d =new dogg();
		d.size=40;
		d.bark();
	}

}
