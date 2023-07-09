Show GNU/Linux commands to do the following
1. Create a directory by the name UnixLab
2. Create three files - file1.txt, file2.txt, file3.txt inside UnixLab directory
3. Create a new directory named Code inside UnixLab and copy the three files to it
4. Remove file1.txt, file2.txt, file3.txt inside UnixLab directory
5. List the contents of Code directory
6. Create directory in a given path (Assume some sub directories specified in the path does not exist). 
7. Count the number of directories in a given directory
8. Print only the directories in a given directory
9. Show attributes of all files in a directory

-----------------------
```bash
1  mkdir UnixLab

2  cd UnixLab
   touch file1.txt file2.txt file3.txt

3  cp file2.txt file1.txt file3.txt Code

4  rm -rf *.txt

5  cd Code
   ls

6  mkdir /User/arjun/Documents/Unix/trail -p

7  find /User/arjun/Documents -mindepth 1 -type d | wc -l

8  find /User/arjun/Documents/ -type d

9  ls -l
```