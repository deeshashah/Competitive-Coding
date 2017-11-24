import java.util.*;

public class stringRev {
    public static String reverseWords(String s) 
    {
        List<String> rev = new ArrayList<>();
        String word;
        //System.out.println("kyu"+s.length());
        for(int i = 0;i<s.length();i++)
        {
            word= "";
            while(i<s.length() && s.charAt(i)==' ')
            {
                i++;
            }
            while(i<s.length() && s.charAt(i)!=' ')
            {
                System.out.println(s.charAt(i));
                word = word + s.charAt(i);
                i++;
            }
            //System.out.println(i);
            if(word!="")
            {
                rev.add(word);
            }
            
            System.out.println("the word is: "+word);
        }
        String result = "";
        for(int i = rev.size()-1;i>=0;i--)
        {
            if(i == 0)
            {
                result = result + rev.get(i);
            }
            else
            {
                result = result + rev.get(i) + ' ';
            }
            
        }
        return result;
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();
        System.out.println("***"+reverseWords("   a   ")+"****");
    }
}