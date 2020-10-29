---
title: isIsogram
tags: string,begginer
---

Checks if a given word is an isogram or not. An isogram is a word that has no repeating letters.

- Convert string to `lowercase`/`uppercase` since capital letters do not equate to small letter.
- Iterate the string using 2 for loops using the iterators `i` and `j`. Where `j` starts of 1 more than `i`. 
- If at any point `str[i]` is equal to `str[j]` return `false`.
- If the above does not happen till you reach the end of the string return `true`.
