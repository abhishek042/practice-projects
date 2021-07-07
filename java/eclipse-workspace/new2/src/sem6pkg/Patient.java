package sem6pkg;

public class Patient{
String name;
double weight,height;
Patient(double w,double h){
weight=w;
height=h;
}
double BMI(){
return(weight/(height*height))*703;
}
public static void main(String[] args){
Patient p=new Patient(75,50);
System.out.println("BMI is:"+p.BMI());
}
}