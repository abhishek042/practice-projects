package wipropkg;

public class box {
	double width,hight,depth;
	public double vol()
	{
		double vol=width*hight*depth;
		return vol;
	}
	public void defbox(double width,double hight, double depth)
	{
		this.width=width;
		this.hight=hight;
		this.depth=depth;
	}
	//empty constructor
	box()
	{}
	
	box(double width,double hight, double depth)
	{
		this.width=width;
		this.hight=hight;
		this.depth=depth;
	}
	
	public static void main(String args[])
	{
		box box1= new box(10,20,30);
		System.out.println("Volume of Box1 "+ box1.vol());
		box box2= new box();
		box2.defbox(32.4, 14.2, 51.3);
		System.out.println("Volume of Box2 "+ box2.vol());
		
		
	}

}
