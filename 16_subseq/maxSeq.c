#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
size_t maxSeq(int * array, size_t n){
    if (n == 0){
        return 0;
    }
    int maxSeqLen = 1;
    int curSeqLen = 1;
    int * curValP = array;
    int * lastValP = array;
    for (int i = 1; i < n; i++){
        curValP = array + i;
        lastValP = curValP - 1;
        if (*curValP > *lastValP){
            curSeqLen++;
            if (curSeqLen > maxSeqLen){
                maxSeqLen = curSeqLen;
            }
        }
        else {
            curSeqLen = 1;
        }
    }
    return maxSeqLen;
}
