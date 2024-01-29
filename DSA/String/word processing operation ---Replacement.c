
//  REPLACEMENT (T, P1, P2) = SUBSTRING (T,1,K-1) //S// SUBSTRING (T, K+L, LENGTH(T)-K-L+1)

//---------ALGORITHM------------------------
/*
text = "I am a student of the Department of CSE at Dhaka"
PATTERN1 = "Dhaka"
PATTERN2 = "DIU"

1... REPLACEMENT(TEXT, PATTERN1, PATTERN2)
        INSERT("I am a student of the Department of CSE at Dhaka", "Dhaka", "DIU")
            = "I am a student of the Department of CSE at DIU"  */


//--------------No Replace------------//

/*
2... SUBSTRING(TEXT, 1, K-1)
            = ("I am a student of the at DIU", 1, 15)
            = "I am a student"

            SUBSTRING (T, K, LENGTH(T)-K+1)
                    = (T,11,6)
                    = "at DIU"

            SUBSTRING (T,1,K-1) // SUBSTRING (T, K, LENGTH(T)-K+1)
                    = "I am a student at DIU"     */

#include<stdio.h>
