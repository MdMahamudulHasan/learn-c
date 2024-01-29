//  DELETE (T, K, L) = SUBSTRING (T,1,K-1) //S// SUBSTRING (T, K+L, LENGTH(T)-K-L+1)

//---------ALGORITHM------------------------
/*
text = "I am a student of the Department of CSE at DIU"
k = 16
L = 25

1... DELETE(TEXT, POSITION, LENGTH)
        INSERT("I am a student of the at DIU", 16, 25)
            = "I am a student of the at DIU"  */




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
