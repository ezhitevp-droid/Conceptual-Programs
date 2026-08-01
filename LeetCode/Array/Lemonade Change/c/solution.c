bool lemonadeChange(int* bills, int billsSize) 
{
    // number of 5$, 10$, 15$ resp.
    int safe[3] = {0, 0, 0};

    for (int i=0; i < billsSize; i++) {
        // collect cash from customer. And calculate change
        int change = bills[i] - 5;
        
        if (bills[i] == 5)  safe[0]++;
        if (bills[i] == 10) safe[1]++;
        // no need to add 20 $ bills since they are useless

        // if bro gives 20$ -> I shall return 10$ and a 5$. (If possible)
        if ( safe[1] && change == 15 ) {
            safe[1]--; change -= 10;
        }

        // if bro gave 10$ -> return 5$ or 20$ -> 3 x 5$ = 15$
        while ( safe[0] && change > 0 ) {
            safe[0]--; change -= 5;
        }

        // if we are out of cash but, cannot return bro's money -> we're cooked
        if (change) return false;
    }

    return true;
}