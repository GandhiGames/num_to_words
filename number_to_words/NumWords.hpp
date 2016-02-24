//
//  NumWords.hpp
//  number_to_words
//
//  Created by Robert Wells on 24/02/2016.
//  Copyright © 2016 Gandhi Games. All rights reserved.
//

#ifndef NumWords_hpp
#define NumWords_hpp

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cstdint>
#include <cmath>
#include <string>

class NumWords {
public:
    static void ToWord(uint64_t input);
    
private:
    NumWords();
    static const char * ErrorNumber;
    static const uint64_t * MaxNumber;
    static const int * MaxString;
    static const char * Singles[];
    static const char * Teens[];
    static const char * Tens[];
    static const char * Hundred;
    static const char * Powers[];
    static const char * Hyphen;
    static const char * Space;
    
};

#endif /* NumWords_hpp */
