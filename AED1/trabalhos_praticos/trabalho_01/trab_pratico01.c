bool lemonadeChange(int* bills, int billsSize) {

    int troco_5 = 0, troco_10 = 0, troco_20 = 0, controle = 1;

    for ( int i = 0; i < billsSize; i++ ) {

        if ( bills[i] == 5 ){

            troco_5++;
            bills[i] = 0;

        } else if ( bills[i] == 10 ) {

            if ( troco_5 >= 1 ) {

                troco_10++;
                bills[i] = 5;
                troco_5--;

            } else {

                controle = 0;
            }

        } else if ( bills[i] == 20 ) {

            if ( troco_10 >= 1 && troco_5 >= 1 ) {
                
                troco_20++;
                bills[i] = 15;
                troco_10--;
                troco_5--;

            } else if ( troco_5 >= 3 ) {

                troco_20++;
                bills[i] = 15;
                troco_5 -= 3;

            } else {

                controle = 0;
                
            }
        }
    }

    return controle;
    
}