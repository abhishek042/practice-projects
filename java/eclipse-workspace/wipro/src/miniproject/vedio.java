package miniproject;

public class vedio {
	
	String title;
	int flag;
	double rating;
	
	vedio (String name)
	{
		title = name;
		this.flag=-1;
	}
	
	String gettitle()
	{
		return title;
	}
	
	void being_cheacked_out()
	{
		System.out.println("Vedio "+title+" is being cheacked out");
		flag=1;
	}
	
	void being_returned()
	{
		System.out.println("Vedio "+title+" is being returned");
		flag=0;
	}
	
	void receiving_a_rating(double x)
	{
		if(x<5 && x>=0)
		{
			rating=x;
			System.out.println("Given rating for "+title+" "+x+"/5");
		}
		else
			System.out.println("Invalid Rating");
		
	}
	
	double getrating()
	{
		return rating;
	}

}
