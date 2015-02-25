
import java.util.Scanner;

/**
 * Solved by S.Harshini Sri , IT 
 */

/**
 * 1 white pawns
 * 2 white knights
 * 3 white bishops
 * 4 white rooks
 * 5 white queens
 * 6 white king
 * 
 * Black pieces use negative values
 * -1 black pawn
 * -2 black knight
 * -3 black bishops
 * -4 black rooks
 * -5 black queens
 * -6 black king
 * 
 * 8| -4 -2 -3 -5 -6 -3 -2 -4
 * 7| -1 -1 -1 -1 -1 -1 -1 -1
 * 6|  0  0  0  0  0  0  0  0
 * 5|  0  0  0  0  0  0  0  0
 * 4|  0  0  0  0  0  0  0  0
 * 3|  0  0  0  0  0  0  0  0
 * 2|  1  1  1  1  1  1  1  1 
 * 1|  4  2  3  5  6  3  2  4
 * ------------------------
 *    1  2  3  4  5  6  7  8
 *
 */
public class chess
{

    /**
     * @param args
     */
    public static void main(String[] args)
    {
        Scanner s=new Scanner(System.in);
        int board[][]=new int[8][8];
        init(board);
        display(board);
        
        
    }

    /**
     * @param board 
     * @return
     */
    private static boolean left2up(int[][] board)
    {
         
        return false;
    }

    /**
     * @param board
     */
    private static void display(int[][] board)
    {
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
                System.out.print(board[i][j]+"\t");
            System.out.println();
        }
    }

    /**
     * 
     */
    private static void init(int arr[][])
    {
        int x=arr.length;
        int y=arr[0].length;
        for(int i=0;i<y;i++)
        {
            arr[1][i]=-1;
            arr[6][i]=1;
        }
        arr[0][0]=-4;
        arr[0][7]=-4; // rooks
        arr[7][7]=4;
        arr[7][0]=4;
        
        arr[0][1]=-2;
        arr[0][6]=-2;  //knights
        arr[7][6]=2;
        arr[7][1]=2;
        
        arr[0][2]=-3;
        arr[0][5]=-3;
        arr[7][2]=3;   // bishops
        arr[7][5]=3;
        
        arr[0][3]=-5; // queen
        arr[7][3]=5; 
        
        arr[0][4]=-6; // King
        arr[7][4]=6; 
    }

}
