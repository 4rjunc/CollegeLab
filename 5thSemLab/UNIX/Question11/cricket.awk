BEGIN{
    FS=","
    total_score=0
    print "Indian Players are\n"
}

$2 == "INDIA"{
    print "Player Name : " $1
    total_score+=$3
}

END{
    print "Total Score of India: " total_score
}

