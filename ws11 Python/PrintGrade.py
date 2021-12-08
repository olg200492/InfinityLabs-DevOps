def grade(grade_score):
    grade_score = int(grade_score) 
    if 0 <= grade_score <= 100:
        if 0<= grade_score <10:
            print("F")
        elif 10 <= grade_score < 30:
            print("E")
        elif 30 <= grade_score < 50:
            print("D")
        elif 50 <= grade_score < 70:
            print("C")
        elif 70 <= grade_score < 90:
            print("B")
        elif 90 <= grade_score <= 100:
            print("A")
    else:
        print("Invalid grade score")