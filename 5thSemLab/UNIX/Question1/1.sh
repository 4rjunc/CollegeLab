echo "Printing Current Directory PWD"
pwd

echo '\nHome directory of current user, echo $HOME '
echo $HOME

echo "\nCurrent GNU/Linux Distribution, lsb_release -d"
lsb_release -d

echo '\nCurrent Linux Kernal Distribution, uname -r'
uname -r

echo '\nCurrent User, whoami and echo $USER'
whoami
echo $USER

echo "\nPrinting all running process, ps -e"
ps -e

echo "\nDisk usage statistics in human readable form, df -h"
df -h

echo "\nProcess with maximum CPU usage, top -o +%CPU"
top -o +%CPU
