package miniproject;

import java.util.*;


public class vediostore  {
	

	ArrayList<vedio> list = new ArrayList<vedio>();

	
	void addVedio(String title)
	{	
		list.add(new vedio(title));
	}
	
	void checkOut(String title)
	{
		for(vedio x:list)
		{
			if(x.title==title && (x.flag==0||x.flag==-1))
			{
				x.being_cheacked_out();
				break;
			}
			else if (x.title==title)
			{
				System.out.println("Vedio "+x.title+ " unavaliable for rent");
				break;
			}
		}
	}
	
	void returnVedio(String title)
	{
		for(vedio x:list)
		{
			if(x.title==title && x.flag==1)
			{
				x.being_returned();
				break;
			}
			else if (x.title==title)
			{
				System.out.println("Vedio was already in store");
				break;
			}
		}
	}
	
	void receiveRating(String title, double r)
	{
		for(vedio x:list)
		{
			if(x.title==title)
			{
				x.receiving_a_rating(r);
			}
		}
	}
	
	void listInventory()
	{
		System.out.println("-----------------");
		System.out.println("Title   "+"Rating");
		System.out.println("-----------------");
		for(int i=0;i<list.size();i++)
		{
			System.out.println(list.get(i).gettitle()+"    "+list.get(i).getrating());
		}
		System.out.println("-----------------");
		
		    
	}
	

}
