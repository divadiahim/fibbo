// Fill out your copyright notice in the Description page of Project Settings.


#include "calc_fib.h"


void Ucalc_fib::fibo(const int& power,int &out_fib)
{
    static int t1 = 0, t2 = 1, nextterm = 0;
    static int i = 1;
    static bool reset = false;
	if (reset == false)
	{
        while(i<=power) {
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
        if (i > power) {
            i = 1;
            t1 = 0;
            t2 = 1;
            nextterm = 0;
            return;
        }
	}
}
