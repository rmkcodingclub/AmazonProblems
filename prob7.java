/*
Solved by
Hariharan, Dept of CSE
*/

int coins( int[] coins, int amount ) {
	int[] table = new int[amount+1];

	Arrays.fill( table, Integer.MAX_VALUE - 100 );
	table[0] = 0;

	for ( int i = 1; i < table.length; i++ ) {
		for ( int j = 0; j < coins.length; j++ ) {
			if ( coins[j] <= i && 
                             table[i - coins[j]] + 1 < table[i] ) {
                            table[i] = table[i - coins[j]] + 1; 
                        }
                }
        }

        return table[amount];
}
