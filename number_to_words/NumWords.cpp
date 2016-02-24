//
//  NumWords.cpp
//  number_to_words
//
//  Created by Robert Wells on 24/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#include "NumWords.hpp"

const char *NumWords::ErrorNumber = "errorNumber";
const uint64_t *NumWords::MaxNumber = (uint64_t*)99999999999999999;
const int *NumWords::MaxString = (int*)1024;
const char (*NumWords::Singles[]) = {
    "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"
};

const char (*NumWords::Teens[]) = {
    "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
};

const char (*NumWords::Tens[]) = {
    ErrorNumber, ErrorNumber, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty",
};

const char *NumWords::Hundred = {"hundred"};

const char (*NumWords::Powers[]) = {
    ErrorNumber, "thousand", "million", "billion", "trillion", "quadrillion"
};

const char *NumWords::Hyphen = "-";
const char *NumWords::Space = " ";

void NumWords::ToWord(uint64_t input)
{
    printf("Input: %llu\n", input);
}

