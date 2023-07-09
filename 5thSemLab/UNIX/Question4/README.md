Create a group called ksd and add two members (alan and tim) to it. Create a folder /home/projectA and change ownership to group ksd. Verify that both users in the ksd group have read and write access to the folder. Create another group teachers and add a user charles to it. Verify if the folder /home/projectA is accessible by charles.

```bash
# groupadd ksd
# useradd -G ksd alan
# useradd -G ksd tim
# passwd alan
New password:
Retype new password:
passwd: password updated successfully
passwd tim
New password:
Retype new password:
passwd: password updated successfully
# mkdir /home/projectA
# ls -l /home/
total 12
drwxr-xr-x 52 nasc      nasc      4096 May  7 16:22 nasc
drwxr-xr-x  2 root      root      4096 May  7 18:34 projectA
# chown :ksd /home/projectA/
# ls -l /home/
total 12
drwxr-xr-x 52 nasc      nasc      4096 May  7 16:22 nasc
drwxr-xr-x  2 root      ksd       4096 May  7 18:34 projectA
# chmod g+w /home/projectA/
# chmod o-rx projectA
# ls -l /home/
total 12
drwxr-xr-x 52 nasc      nasc      4096 May  7 16:22 nasc
drwxrwx---  2 root      ksd       4096 May  7 18:34 projectA
# exit
logout
$ su alan
Password:
$ whoami
alan
$ cd /home/projectA
$ touch hello.txt
$ ls
hello.txt
$ ls -l
total 0
-rw-rw-r-- 1 alan alan 0 May  7 18:39 hello.txt
$ chown :ksd hello.txt
$ ls -l
total 0
-rw-rw-r-- 1 alan ksd 0 May  7 18:39 hello.txt
$ exit
$ su tim
Password:
$ cd /home/projectA
$ echo "hello" > hello.txt
$ nano hello.txt
$ cat hello.txt
hello
$ exit
$ sudo su
[sudo] password for nasc:
# groupadd teacher
useradd -G teacher charles
passwd charles
New password:
Retype new password:
passwd: password updated successfully
# exit
exit
$ su charles
Password:
$ cd /home/projectA
sh: 1: cd: can't cd to /home/projectA
```