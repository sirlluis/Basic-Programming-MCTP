# Hangman game
#

# -----------------------------------
# Helper code
# You don't need to understand this helper code,
# but you will have to know how to use the functions
# (so be sure to read the docstrings!)

import random
import string

WORDLIST_FILENAME = "C:/Users/Mi PC/Desktop/pyTest/words.txt"

def loadWords():
    """
    Returns a list of valid words. Words are strings of lowercase letters.
    
    Depending on the size of the word list, this function may
    take a while to finish.
    """
    print("Loading word list from file...")
    # inFile: file
    inFile = open(WORDLIST_FILENAME, 'r')
    # line: string
    line = inFile.readline()
    # wordlist: list of strings
    wordlist = line.split()
    print("  ", len(wordlist), "words loaded.")
    return wordlist

def chooseWord(wordlist):
    """
    wordlist (list): list of words (strings)

    Returns a word from wordlist at random
    """
    return random.choice(wordlist)

# end of helper code
# -----------------------------------

# Load the list of words into the variable wordlist
# so that it can be accessed from anywhere in the program
wordlist = loadWords()

def isWordGuessed(secretWord, lettersGuessed):
    for letra in secretWord:
        if letra not in lettersGuessed:
            return False
    return True
    '''
    
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: boolean, True if all the letters of secretWord are in lettersGuessed;
      False otherwise
    '''
    # FILL IN YOUR CODE HERE...



def getGuessedWord(secretWord, lettersGuessed):
    resultado = ""
    for letra in secretWord:
        if letra in lettersGuessed:
            resultado += letra
        else:
            resultado += " _ "
    return resultado
    '''
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters and underscores that represents
      what letters in secretWord have been guessed so far.
    '''
    # FILL IN YOUR CODE HERE...



def getAvailableLetters(lettersGuessed):
    letras = string.ascii_lowercase #Crea un string con las letras del abecedario, es necesaria la libreria string
    resultado = ""
    for letra in letras:
        if letra not in lettersGuessed:
            resultado += letra
    return resultado
    '''
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters that represents what letters have not
      yet been guessed.
    '''
    # FILL IN YOUR CODE HERE...
    

def hangman(secretWord):
    lettersGuessed = set()
    intentos_restantes = 8
    
    print("Bienvenido al juego del ahorcado")
    print(f"Estoy pensando en una secretWord de {len(secretWord)} letras...")
    
    while intentos_restantes > 0:
        palabra_actual = getGuessedWord(secretWord, lettersGuessed)
        print(palabra_actual)
        print(f"Letras restantes no adivinadas: {getAvailableLetters(lettersGuessed)}")
        
        letra = input("Ingresa una letra: ")
        
        if letra in lettersGuessed:
            print("Ya has ingresado esa letra. Intenta con otra.")
        elif letra in secretWord:
            lettersGuessed.add(letra)
            if isWordGuessed(secretWord, lettersGuessed):
                print(f"Felicitaciones, ¡adivinaste la palabra ::: {secretWord} :::!")
                return
        else:
            intentos_restantes -= 1
            print(f"Letra incorrecta. Te quedan {intentos_restantes} intentos.")
            
        print("--------------")
    
    print(f"¡Lo siento, has perdido! La palabra era :::: {secretWord} ::::")
        
        
        
        



    '''
    secretWord: string, the secret word to guess.

    Starts up an interactive game of Hangman.

    * At the start of the game, let the user know how many 
      letters the secretWord contains.

    * Ask the user to supply one guess (i.e. letter) per round.

    * The user should receive feedback immediately after each guess 
      about whether their guess appears in the computers word.

    * After each round, you should also display to the user the 
      partially guessed word so far, as well as letters that the 
      user has not yet guessed.

    Follows the other limitations detailed in the problem write-up.
    '''
    # FILL IN YOUR CODE HERE...

# When you've completed your hangman function, uncomment these two lines
# and run this file to test! (hint: you might want to pick your own
# secretWord while you're testing)

secretWord = chooseWord(wordlist).lower()
hangman(secretWord)
