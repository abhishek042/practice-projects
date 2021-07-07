package sem6pkg;

import java.util.*;
class Video
	{
		String title;
		Boolean flag=false;
		static int rating=0;
	}

class VideoStore
	{
		Video[] v=new Video[5];
		
		void addVideo()
			{
				Scanner sc=new Scanner(System.in);

				System.out.println("Add 5 movies to store");

				for(int i=0;i<5;i++)
					{
						v[i]=new Video();
						v[i].title=sc.nextLine();
					}	
			}	
		void checkOut(String s)
			{
				int c=0;
				for(int i=0;i<5;i++)
					{
						if(v[i].title.equals(s) && v[i].flag==false)
						v[i].flag=true;
						else
							c++;
					}
				if(c==5)
					System.out.println("Video not available or been checked out");
			}
		void returnVideo(String s)
		{
			int c=0,r;
			Scanner sc=new Scanner(System.in);
			for(int i=0;i<5;i++)
			{
				if(v[i].title.equals(s) && v[i].flag==true)
				{
					v[i].flag=false;
					System.out.println("Give rating 5 or less");
					r=sc.nextInt();
					if(r<=5)
						receiveRating(s,r);
					else
						System.out.println("Please rate under 5");
				}
				else
				{
					c++;
				}
			}
			if(c==5)
				System.out.println("Video was never checked out");
		}
			void receiveRating(String s,int r)
			{
				System.out.println("Thanks for rating the video");
			}
			void listInventory()
			{
				System.out.println("Current Inventory");
				for(int i=0;i<5;i++)
				{
					if(v[i].flag==false)
						System.out.println(v[i].title);
				}
			}
	}

public class VideoStoreLauncher {
	public static void main(String args[])
	{
	String s;
	Scanner sc=new Scanner(System.in);
	VideoStore vs=new VideoStore();
	vs.addVideo();
	System.out.println("Enter a video for checkout");
	s=sc.nextLine();
	vs.checkOut(s);
	System.out.println("Enter a video for checkin");
	s=sc.nextLine();
	vs.returnVideo(s);
	vs.listInventory();
	}
}
