
/**
Solved by
K.S.VIDHYA
111712205105 IT-B

*/



public class xxxx
{

    /**
     * @param args
     */
    public static void main(String[] args)
    {
        int i;
        for( i=510;;i++)
            if(isprime(i))
                if(i>0 &&!((i&(i-1))==1))
                {
                    System.out.println(i);
                    break;
                }
        for( i=0;;i=i=i+2)
            if(i%2==0)
                if(i>0 &&!((i&(i-1))==1))
                {
                    System.out.println(i);
                    break;
                }
        for( i=1;;i=i=i+2)
            if(i%2!=0)
                if(i>0 &&!((i&(i-1))==1))
                {
                    System.out.println(i);
                    break;
                }
        for( i=2;;i=i=i*2)
            if(i>0 &&!((i&(i-1))==1))
                {
                    System.out.println(i);
                    break;
                }
                

    }
    public static boolean isprime(int j)
    {
        int x=0;
        if(j<2)
            return false;
        if(j%2==0 && j!=2)
            return false;
        for(int i=3;i<=Math.sqrt(j);i=i+2)
            if(j%i==0)
            {
                x++;
                break;
            }
        if(x==0)
            return true;
        else
            return false;
    }

}
