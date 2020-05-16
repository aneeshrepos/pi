import random

guessesTaken = 0

myname = input('hello.What is your name ')


while True:
    number = random.randint(1,20)
    print('Well ,'+myname+',I am thinking of a number between 1 and 20. Can you try and guess it within 3 turns ? ')

    for guessesTaken in range(5):
        guess = input('take a wild guess ')
        guess = int(guess)

        if guess < number:
           print ('you went too low')

        if guess > number:
           print('you went too high')   

        if guess == number:
           break

    if guess == number:
        print ('spot on. You guessed it in', guessesTaken+1 ,'turns')

    if guess != number:
        print(' the number i was thinking of was ',number,)
              
              
    result = input('do you want to play again ? yes or no')

    if result == 'yes':
        continue
    else:
        break


                

    
    

    
