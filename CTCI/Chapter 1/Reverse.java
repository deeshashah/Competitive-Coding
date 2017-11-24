/*
Write code to reverse a C-Style String. (C-String means that “abcd” is represented as
five characters, including the null character.)


*/
import java.util.*;
class Reverse
{
	static String stringReverse(String input)
	{
		int n = input.length()+1;
		System.out.println(n);
		/*List<Character> rev = new ArrayList<Character>();*/
		for(int i=0;i<=n;i++)
		{
			System.out.println(input.charAt(i));
		}
		/*StringBuilder result = new StringBuilder(rev.size()+1);
		for (Character c : rev) 
		{
  			result.append(c);
		}
		String op = result.toString();*/
		return "lol";
	}

	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		String input = scanner.nextLine();
		System.out.println(stringReverse(input+"/0"));
	}
}