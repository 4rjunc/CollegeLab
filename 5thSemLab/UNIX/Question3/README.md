Show GNU/Linux commands to do the following
1. Store first fifteen lines of the file /usr/share/dict/words to the file dictionary.txt in the user’s home direc- tory
2. Print the line number of the string India in the file /usr/share/dict/words
3. Given a file with a number of lines, show the lines with “the” in it.
4. Given a set of words, order them in lexicographic order using filter.
5. Compare two files containing words

```bash
head -n 15 /usr/share/dict/words > dictionary.txt

grep -n "^India$" /usr/share/dict/words 

grep "\<the\>" nasc.txt

sort frutis.txt

diff fruits.txt nasc.txt
```