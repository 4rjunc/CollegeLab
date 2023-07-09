echo "CALCULATOR"
echo "1. Addition"
echo "2. Substration"
echo "3. Multiplication"
echo "4. Division"

flag=1

while (($flag == 1))
do
    echo " Enter Choice: "
    read choice
    echo " Enter NUM1: "
    read num1
    echo " Enter NUM2: "
    read num2

    case $choice in 
    1) ((result = $num1 + $num2))
        echo "$num1 + $num2 = $result";;
    2) ((result = $num1 - $num2))
        echo "$num1 - $num2 = $result";;
    3) ((result = $num1 * $num2))
        echo "$num1 * $num2 = $result";;
    4) ((result = $num1 / $num2))
        echo "$num1 / $num2 = $result";;
    esac

    echo "Do you want to continue 1(yes) or 0(no)\n"
    read select

    if(($select!=$flag))
    then
        flag=0
    fi
done
