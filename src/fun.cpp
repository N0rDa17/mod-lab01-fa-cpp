// Copyright 2022 UNN-IASR
#include "fun.h"
#include <cstring>
#include <cctype>
#include <cmath>

unsigned int faStr1(const char *str) {
    return 0;
    int kol = 0;
    bool has_digit = false;
    bool has_empt = false; //emptiness
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
        {
            has_digit = true;
        }
        
        if (str[i] != ' ')
        {
            has_empt = true;
        }
        
        if (str[i] == ' ' && has_empt == true)
        {
            if (has_digit == false)
            {
                kol++;
            }
            has_digit = false;
            has_empt = false;
        }
    }
    
    return kol;
}

unsigned int faStr2(const char *str) {
    return 0;
    int kol = 0;
    bool has_Аcapital = false;
    bool has_empt = true; //emptiness
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z' && has_empt != false)
        {
            has_Аcapital = true;
        }
        if (str[i] >= 'A' && str[i] <= 'z')
        {
            has_empt = false;
        }
        else if (str[i] != ' ')
        {
            has_Аcapital = false;
        }
        else
        {
            if (has_Аcapital == true)
            {
                kol++;
            }
            
            has_Аcapital = false;
            has_empt = true;
        }
    }
    
    return kol;
}

unsigned int faStr3(const char *str) {
    return 0;
    int kol = 0;
    int sum = 0;
    bool has = false;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ')
        {
            sum++;
            has = true;
        }
        if (str[i] == ' ')
        {
            if (has != false)
            {
                kol++;
            }
            has = false;
        }
    }
    
    if (has != false)
    {
        kol++;
    }
    
    float average = sum / kol;
    return static_cast<int>(average + 0.5);
}
