echo "Printing Natural Numbers"

echo "For Loop"
for ((i=1;i<=100;i=i+2))
do  
    echo -n "$i "
done
echo
echo "While Loop"
i=1
while ((i<=100))
do 
    echo -n "$i "
    ((i=i+2))
done
echo