BEGIN{
    topper=""
    max_marks=0
    FS=","
}
{
    total_marks=$2+$3+$4
    student=$1
    if (total_marks > max_marks)
    {
        max_marks=total_marks
        topper=student
    }
}
END{
    print "Topper: " topper, "\nMarks: " max_marks
}