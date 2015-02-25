//Solved by M Yuvasri, EEE

#include<stdio.h>
#include<stdlib.h>
#define chessBoardSize 12
 
int chessBoard[chessBoardSize][chessBoardSize] = {0};
typedef struct point{
    int x, y;
}POINT;
int count=0;
 
int nextPosition(int x, int y, POINT* array){
    int m=0;
    /* finds the next possible points for the current
    position in the chess board:
    like
    _   _   _   _   _   _
    _   *   _   *   _   _
    *   _   _   _   *   _
    _   _   P   _   _   _
    *   _   _   _   *   _
    _   *   _   *   _   _ 
 
as above if 'P' is the current (x,y)
* represents the next possible points and
also checks it exists within the chess board
    */
 
    if( (x+2) < chessBoardSize ){
        if( (y+1) < chessBoardSize ){
            array[m].x = x+2;
            array[m++].y = y+1;
        }
        if( (y-1) >-1 ){
            array[m].x = x+2;
             array[m++].y = y-1;
        }
    }
 
    if( (x-2) > -1){
        if( (y+1) < chessBoardSize ){
            array[m].x = x-2;
            array[m++].y = y+1;
        }
        if( (y-1) >-1 ){
            array[m].x = x-2;
            array[m++].y = y-1;
        }
    }
 
    if( (y+2) < chessBoardSize){
        if( (x+1) < chessBoardSize ){
            array[m].x = x+1;
            array[m++].y = y+2;
        }
        if( (x-1) >-1 ){
            array[m].x = x-1;
            array[m++].y = y+2;    
        }
    }  
 
    if( (y-2) > -1){
        if( (x+1) < chessBoardSize ){
            array[m].x = x+1;
            array[m++].y = y-2;
        }
        if( (x-1) >-1 ){
            array[m].x = x-1;
            array[m++].y = y-2;    
        }
    }
    return m;
}
 
void displayAnswer(){
    int i, j, k;
    printf("\n");
    for(i=0; i<chessBoardSize; i++){
        for(j=0; j<chessBoardSize; j++)
            printf("%d\t",chessBoard[i][j]);
            printf("\n\n");
    }
}
 
//  recursive function using backtrack method
void knightTravel(int x, int y){
    POINT array[8] = {{0, 0}, {0, 0}};
    // remainin initialized to zero automatically
    volatile int noOfPossiblePoints = nextPosition(x, y, array);
    volatile int i;
 
    chessBoard[x][y] = ++count;
 
    // base condition uses count
    if( count == chessBoardSize * chessBoardSize ){
        displayAnswer();
        exit(0);
    }
 
    for(i=0; i< noOfPossiblePoints; i++)
        if( chessBoard[array[i].x][array[i].y] == 0 )
            knightTravel(array[i].x, array[i].y);
 
    chessBoard[x][y] = 0;
    count--;
}
 
int main()
{
    knightTravel(0, 0);
    printf("No solution exists\n");
    return 0;
}
