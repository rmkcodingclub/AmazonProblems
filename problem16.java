/**
Solved by
Chandhiny, IT dept.
*/

import java.util.Arrays;
import java.util.Scanner;

public class second_largest
{

    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int a=s.nextInt();
        int b=s.nextInt();
        int first,second;
        if(a>b)
        {
            first=a;second=b;
        }
        else
        {
            first=b;
            second=a;
        }
        for(int i=2;i<n;i++)
        {
            a=s.nextInt();
            if(a<first && a>second)
                second=a;
            else if(a>first)
            {
                second=first;
                first=a;
            }
                
                
        }
        System.out.println(second);

    }

}
