BEGIN{
    count=0
    FS=","
    total_marks=0
}

$1 ~ /^NA[0-9]{2}PICS[0-9]{2}$/ {
    total_marks += $3
    count++
}

END{
    avg_marks=total_marks/count
    print "Average Marks: " avg_marks
}