package new2pkg;
interface fly
{
	void goforward();
	void gobackwards();
}
class duck implements fly
{
	public void goforward()
	{
		System.out.println("The Duck Swims Look,It Swims Forwards");
	}
	public void gobackwards()
	{
		System.out.println("The Duck Is Going Backwards Look,It Swims Backwards");		
	}
}

public class ducktestdrive{
	public static void main(String[] args)
	{
		fly obj=new duck();
		obj.goforward();
		obj.gobackwards();
	}
}
