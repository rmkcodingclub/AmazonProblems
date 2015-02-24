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


