if (($# < 2))
then 
    echo "Enter At Least Two Numbers"
    exit 1
fi
sorted_numbers=($(echo $* | tr ' ' '\n' | sort -n))
echo "Sorted Numbers are ${sorted_numbers[@]}"