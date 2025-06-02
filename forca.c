#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 100
#define MAX_WORD_LENGTH 50

char words[MAX_WORDS][MAX_WORD_LENGTH]; // Matrix to store words
int numWords = 0; // Number of words loaded

void createfile(const char *filename); // Function to create the "gamewords.txt" file
void loadWordsFromFile(const char *filename); // Function to load words from file
char* chooseRandomWord(); // Function to choose a random word from the loaded words
int checkGuess(char word[], char guess);// Function to check if a character is present in the word

int main()
{
    createfile("gamewords.txt");
    loadWordsFromFile("gamewords.txt");
    
    char *word = chooseRandomWord();
    int wordLength = strlen(word);
    char guessed[wordLength];
    memset(guessed, '_', wordLength); // Initialize guessed array with underscores
    
    int attempts = 6;
    char guess;
    
    printf("\nWelcome to Hangman!\n");
    
    while (attempts > 0)
    {
        printf("\nWord: ");
        for (int i = 0; i < wordLength; i++) 
        {
            printf("%c ", guessed[i]);
        }
        
        printf("\nAttempts left: %d\n", attempts);
        printf("Enter a letter: ");
        scanf(" %c", &guess);
        
        if (checkGuess(word, guess))
        {
            for (int i = 0; i < wordLength; i++)
            {
                if (word[i] == guess)
                {
                    guessed[i] = guess;
                }
            }
        }
        else
        {
            attempts--;
            printf("Incorrect guess\n\n");

            switch(attempts)
            {
                case 5:
                    printf("      O\n");
                    break;

                case 4:
                    printf("      O\n");
                    printf("     -\n");
                    break;
                
                case 3:
                    printf("      O\n");
                    printf("     -|\n");
                    break;
                
                case 2:
                    printf("      O\n");
                    printf("     -|-\n");
                    break;

                case 1:
                    printf("      O\n");
                    printf("     -|-\n");
                    printf("     |\n");
                    break;
                
                case 0:
                    printf("      O\n");
                    printf("     -|-\n");
                    printf("     | |\n");
                    break;
            }
        }

        int found = 1;
        for (int i = 0; i < wordLength; i++)
        {
            if (guessed[i] == '_')
            {
                found = 0;
                break;
            }
        }
        
        if (found)
        {
            printf("\nCongratulations! You guessed the word: %s\n", word);
            word = chooseRandomWord();
            wordLength = strlen(word);
            memset(guessed, '_', wordLength);
            attempts = 6;
        }
    }
    
    if (attempts == 0)
    {
        printf("\nSorry, you're out of attempts. The word was: %s\n\n", word);
    }
    
    return 0;
}

// Function to create the "gamewords.txt" file
void createfile(const char *filename)
{
    FILE *newfile;
    newfile = fopen(filename, "w");

    fprintf(newfile,"pineapple\nbanana\napple\nchair\ncouch\ntable");

    fclose(newfile);
}

// Function to load words from file
void loadWordsFromFile(const char *filename)
{
    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Could not open file %s\n", filename);
        exit(1);
    }
    
    while (fgets(words[numWords], MAX_WORD_LENGTH, file) != NULL)
    {
        // Remove newline character from each word
        strtok(words[numWords], "\n");
        numWords++;
    }
    
    fclose(file);
}

// Function to choose a random word from the loaded words
char* chooseRandomWord()
{
    srand(time(NULL));
    int randomIndex = rand() % numWords;
    return words[randomIndex];
}

// Function to check if a character is present in the word
int checkGuess(char word[], char guess)
{
    int len = strlen(word);
    for (int i = 0; i < len; i++)
    {
        if (word[i] == guess)
        {
            return 1;
        }
    }
    return 0;
}