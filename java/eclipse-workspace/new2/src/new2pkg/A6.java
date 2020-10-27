package new2pkg;

interface printable{
void print();
int a=10;
void add();
}
class A2 implements printable{
	int c;
public void add()
	{
		c=c+a;
	}
public void print()
	{
		System.out.println("Hello");
		System.out.println(a);
		System.out.println(c);

	}
}
class A6 implements printable{
public void print()
{
	System.out.println("Hello");
}
public void add()
{
	
}

public static void main(String args[]){
A2 obj2 = new A2();
obj2.print();
obj2.c=10;
obj2.add();
obj2.print();
 }
}
