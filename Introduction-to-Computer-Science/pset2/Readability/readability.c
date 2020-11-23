#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <math.h>

int main(void)
{
    string text = get_string("Text: ");
    int length = strlen(text);
    int l = 0, s = 0, w = 0; // initialize the letters, words and sentences to 0;
    float L = 0, S = 0;

    for (int i = 0; i < length; i++) // in a loop from 0 to len of string, check the following
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            l++; // to check whether the element is an alphabet, see if the ascii lies within the range of a-z or A-Z, if yes, increment l.
        }
        if (text[i] == ' ')
        {
            w++; // if the current element is a space, it means that a word just ended, so increment w.
        }
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            s++; // if the current element is a . or ? or !, it means that a sentence just ended.
        }
    }
    w++; // finally, we increment the value of w by 1 because the last word in the text does not have a leading space after it.

    // printf("Letters = %i, Words = %i, Sentences = %i\n", l, w, s);
    L = (float)(l * 100) / w;
    S = (float)(s * 100) / w;

    // printf("L = %f,S = %f\n", L, S);

    int  index = round((0.0588 * L) - (0.296 * S) - 15.8);
    // round the index to the correct number to get the grade


    // check for 3 conditions, if the index is less than one, if it is between 1 and 16 or if it is greater than 16.

    if (index < 1)
    {
        // index = 1;
        printf("Before Grade 1\n");
    }
    else if (index > 16)
    {
        // index = 16;
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }



}

/*
question:
c-l index: index = 0.0588 * L - 0.296 * S - 15.8
Here, L is the average number of letters per 100 words in the text, and S is the average number of sentences per 100 words in the text.

$ ./readability
Text: Congratulations! Today is your day. You're off to Great Places! You're off and away!
Grade 3
*/