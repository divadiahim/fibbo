// Fill out your copyright notice in the Description page of Project Settings.


#include "calc_fib.h"




void Ucalc_fib::fibo(const int& power,const bool &reset,int &out_fib, bool &reached)
{
    FTimerHandle InputTimeHandle;
    static int t1 = 0 ;
    static int t2 = 1;
    static int nextterm = 0;
    static int i = 1;
    static bool lma;
    if (reset == false)
    {
        while (i <= power) {
            // Prints the first two terms.
            if (i == 1) {
                out_fib = t1;
                i++;
                return;
            }
            if (i == 2) {
                out_fib = t2;
                i++;
                return;
            }
            nextterm = t1 + t2;
            t1 = t2;
            t2 = nextterm;
            out_fib = nextterm;
            i++;
            return;
        }
        if (i > power)
        {
            reached = true;
            return;
        }
    }
    else
    {
        i = 1;
        t1 = 0;
        t2 = 1;
        nextterm = 0;
        out_fib = nextterm;
        reached = false;
        return;
    }

}
