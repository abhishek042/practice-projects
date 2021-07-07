package wipropkg;

public class weightofstr {
	public int fwos(String input1,int input2){
	    int sum=0;
	    String s=input1.toUpperCase();
	    int len=input1.length();
	    for(int i=0;i<len;i++){
	        char c=s.charAt(i);
	        if(Character.isAlphabetic(c)){
	            if((input2==0)&&(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'))
	                sum+=0;
	            else
	                sum+=c-64;
	        }
	    }
	    return sum;
	}
	

	public static void main (String[] args )
	{
		weightofstr obj= new weightofstr();
		String str = "hi its me!";
		int w;
		w = obj.fwos(str,1);
		System.out.println(w);	
	}

}
