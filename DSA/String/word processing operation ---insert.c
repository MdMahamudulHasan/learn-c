//  INSERT (T, K, S) = SUBSTRING (T,1,K-1) //S// SUBSTRING (T, K, LENGTH(T)-K+1)

//---------ALGORITHM------------------------
/*
text = "I am a student of the at DIU"
String = "Department of CSE"
k = 23

1... INSERT(TEXT, POSITION, STRING)
        INSERT("I am a student of the at DIU", 23, "Department of CSE")
            = "I am a student of the at DIU Department of CSE"  */




/*
2... SUBSTRING(TEXT, 1, K-1)
            = ("I am a student of the at DIU", 1, 22)
            = "I am a student of the"

            S = "Department of CSE"

            SUBSTRING (T, K, LENGTH(T)-K+1)
                    = (T,23,6)
                    = "at DIU"

            SUBSTRING (T,1,K-1) //S// SUBSTRING (T, K, LENGTH(T)-K+1)
                    = "I am a student of the Department of CSE at DIU"    */


#include<stdio.h>
