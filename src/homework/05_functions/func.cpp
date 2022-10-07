//add include statements
#include<iostream>
#include "func.h"

//add function code here
using std::cout;
using std::cin;

double get_gc_content(const string& dna)
{
    double total_chars = (double) dna.length();
    int total_gc = 0;

    for (int i = 0; i < dna.length(); i++)
    {
        if ('C' == dna[i] || 'G' == dna[i]) 
        {
            total_gc++;
        }        
    }

    return total_gc / total_chars;
}

string get_dna_complement(string dna)
{
    string complement = "";

    for (int i = 0; i < dna.length(); i++)
    {

        switch(dna[i]) {
            case 'A':
            {
                complement = complement + 'T';
            }
            break;
            case 'T':
            {
                complement = complement + 'A';
            }
            break;
            case 'G':
            {
                complement = complement + 'C';
            }
            break;
            case 'C':
            {
                complement = complement + 'G';
            }
            break;
            default:
            break;
        }
    }

    return get_reverse_string(complement);
}

string get_reverse_string(string dna)
{
    string reversed = "";

    for (int i = dna.length() - 1; i >= 0; i--)
    {
        reversed = reversed + dna[i];
    }

    return reversed;
}