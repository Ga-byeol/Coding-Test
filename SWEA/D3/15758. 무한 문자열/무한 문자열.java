import java.util.Scanner;
import java.io.FileInputStream;

class Solution
{
	public static void main(String args[]) throws Exception
	{
		Scanner sc = new Scanner(System.in);
		int T;
		T=sc.nextInt();

		for(int test_case = 1; test_case <= T; test_case++){
			String ss = sc.next();
            		String st = sc.next();
            		String str = " yes";
            		int mlen = 0;
            
           	 	if(ss.length() > st. length()){
            			ss += ss;
            		    mlen = ss.length();
            		}
            		else {
            			st += st;
            		    mlen = st.length();
            		}
            		char[] s = ss.toCharArray();
            		char[] t = st.toCharArray();
            
            		for(int i = 0; i < mlen; i++){
               	 		if(s[i % s.length] != t[i % t.length]){
                			str = " no";
                		}
	    		}
            		System.out.println("#" + test_case + str);
		}
	}
}
