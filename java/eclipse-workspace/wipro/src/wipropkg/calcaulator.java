package wipropkg;

public class calcaulator {
    static int powerInt(int num1,int num2)
    {
        return (int)Math.pow(num1, num2);
    }
    static double powerDouble(double num1,double num2)
    {
        return Math.pow(num1, num2);
    }    
}
class runner{
    
    public static void main(String args[])
    {
        System.out.println("power 1^2 "+calcaulator.powerInt(1,2));
        System.out.println("power 4.5^4.5 "+calcaulator.powerDouble(4.5,4.5));
    }
}
