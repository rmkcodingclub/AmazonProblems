/**
Solved by Manikandan, Dept of CSE
*/

package javaapplication1;
import java.util.*;
public class Main
{
public static void main(String args[])
{
Scanner in=new Scanner(System.in);
String s=in.nextLine();
char a=naresh(s);
System.out.println(a);
}
public static Character naresh(String e)
{
HashMap<Character,Integer> d=new HashMap<Character,Integer>();
int i,j;
Character c;
j=e.length();
for(i=0;i<j;i++)
{
c=e.charAt(i);
if(d.containsKey(c))
d.put(c,d.get(c)+1);
else
d.put(c,1);
    }
for(i=0;i<j;i++)
{
c=e.charAt(i);
if(d.get(c)==1)
return c;
}
return null;
}
}


/**
 * Solution by  Akila J, CSE
*/

 import java.io.*;
public class RegexTestStrings
 {
  public static final String EXAMPLE_TEST = "This is my small example " + "string which I'm going to " + "use for pattern matching.";

  public static void main(String[] args)
 {

   System.out.println(EXAMPLE_TEST.matches("^b*[a-z][a-z][a-z]$"));
}
}

