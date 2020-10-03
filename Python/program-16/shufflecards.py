# Python program to shuffle a deck of card

import itertools, random

deck = list(itertools.product(range(1,14),['Spade','Heart','Diamond','Club']))

random.shuffle(deck)

print("woohh here you got:")
for i in range(5):
   print(deck[i][0], "of", deck[i][1])