package sem6pkg;

//A Simple Java program to demonstrate application 
//of overriding in Java 

//Base Class 
class Employee extends Exception{ 
 public static int base = 10000; 
  int salary() 
 { 
	 
    // return base; 
     throw new ArithmeticException("dividing a number by 5 is not allowed in this program");
 } 
} 

//Inherited class 
class Manager extends Employee { 
 // This method overrides salary() of Parent 
 int salary() 
 { 
     return base + 20000; 
     throw new InterruptedException("dividing a number by 5 is not allowed in this program");
 } 
} 

//Inherited class 
class Clerk extends Employee { 
 // This method overrides salary() of Parent 
 int salary() 
 { 
     return base + 10000; 
 } 
} 

//Driver class 
class Main { 
 // This method can be used to print the salary of 
 // any type of employee using base class reference 
 static void printSalary(Employee e) 
 { 
     System.out.println(e.salary()); 
 } 

 public static void main(String[] args) 
 { 
     Employee obj1 = new Manager(); 

     // We could also get type of employee using 
     // one more overridden method.loke getType() 
     System.out.print("Manager's salary : "); 
     printSalary(obj1); 

     Employee obj2 = new Clerk(); 
     System.out.print("Clerk's salary : "); 
     printSalary(obj2); 
 } 
}