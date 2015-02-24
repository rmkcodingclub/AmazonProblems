/**
Solved by
Aravinth T
111712205011
IT Dept
*/

import java.util.Scanner;

/**
 * 
 */

/**
 * @author aravinth
 *
 */
public class notpresent
{

	/**
	 * @param args
	 */
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		int n=s.nextInt();
		int arr[]=new int[n];
		for(int i=0;i<n;i++)
			arr[s.nextInt()-1]=1;
		for(int i=0;i<n;i++)
			if(arr[i]==0)
				System.out.println(i+1);

	}

}
