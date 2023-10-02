if __name__ == '__main__':
    student_records = []
    for _ in range(int(input("Enter the number of students: "))):
        name = input("Enter name: ")
        score = float(input("Enter score: "))
        student_records.append([name, score])

    # Sort the records by score
    student_records.sort(key=lambda x: x[1])

    # Find the second lowest score
    second_lowest_score = None
    for record in student_records:
        if second_lowest_score is None or record[1] > second_lowest_score:
            second_lowest_score = record[1]
            break

    # Collect names associated with the second lowest score
    second_lowest_names = [record[0] for record in student_records if record[1] == second_lowest_score]

    # Sort the names alphabetically
    second_lowest_names.sort()

    # Print each name on a new line
    for name in second_lowest_names:
        print(name)

