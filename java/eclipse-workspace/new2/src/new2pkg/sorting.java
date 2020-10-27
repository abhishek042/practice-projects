package new2pkg;
class dog
{
	int size;
	String name;
	String breed;
	
	void bark()
	{
		System.out.println("woof woof");
	}
	}


 class dogtestdrive {

	public static void main(String[] args) {
		dog d =new dog();
		d.size=40;
		d.bark();
	}

}
