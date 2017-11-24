import java.util.*;

class removeDup
{	
	static String removeit(String input)
	{
		//int n = input.length();
		for(int i=0;i<input.length();i++)
		{
			char a = input.charAt(i);
			for(int j=i+1;j<input.length();j++)
			{
				if(input.charAt(j) == a)
				{
					input = input.substring(0, j) + input.substring(j + 1);
				}
			}
		}
		return input;
	}

	public static void main(String[] args) 
	{
		Scanner scanner = new Scanner(System.in);
		String input = scanner.nextLine();
		System.out.println(removeit(input));
	}
}