echo "Enter 3 Numbers"

echo "Enter Num1: "
read num1
echo "Enter Num2: "
read num2
echo "Enter Num3: "
read num3

if ((num1 > num2))
then
    if ((num1 > num3))
    then
        echo "$num1 is greatest"
    fi
elif ((num2 > num3))
then
    echo "$num2 is greatest"
else 
    echo "$num3 is greatest"
fi